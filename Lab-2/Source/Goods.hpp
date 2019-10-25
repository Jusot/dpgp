#pragma once

#include <memory>
#include <vector>
#include <string>
#include <utility>

namespace Lab2
{
class CPU;
class Memory;
class Mainboard;

class Computer
{
  public:
    virtual ~Computer() = 0;

    virtual std::vector<std::shared_ptr<CPU>> getCPUs();
    virtual std::vector<std::shared_ptr<Memory>> getMemories();
    virtual std::shared_ptr<Mainboard> getMainboard();

    std::size_t getUID();
    void setUID(std::size_t uid);

  private:
    std::size_t uid_;
};

class PC : public Computer {};
class Laptop : public Computer {};

enum class Builder
{
    SAMSUNG,
    INTEL
};

class AddCPU : public Computer
{
  public:
    AddCPU(Computer &pre, Builder builder)
      : pre_(pre), builder_(builder) {}
    std::vector<std::shared_ptr<CPU>> getCPUs() override;

  private:
    Computer &pre_;
    Builder builder_;
};

class AddMemory : public Computer
{
  public:
    AddMemory(Computer &pre, Builder builder)
      : pre_(pre), builder_(builder) {}
    std::vector<std::shared_ptr<Memory>> getMemories() override;

  private:
    Computer &pre_;
    Builder builder_;
};

class AddMainboard : public Computer
{
  public:
    AddMainboard(Computer &pre, Builder builder)
      : pre_(pre), builder_(builder) {}
    std::shared_ptr<Mainboard> getMainboard() override;

  private:
    Computer &pre_;
    Builder builder_;
};
} // namespace Lab2
