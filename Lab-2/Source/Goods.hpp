#pragma once

#include <memory>
#include <vector>
#include <utility>

namespace Lab2
{
class CPU;
class Memory;
class Mainboard;

class Computer
{
  public:
    Computer(std::vector<std::unique_ptr<CPU>> cpu,
        std::vector<std::shared_ptr<Memory>> memories,
        std::unique_ptr<Mainboard> mainboard);

    const std::vector<std::unique_ptr<CPU>> &getCPUs();
    const std::vector<std::shared_ptr<Memory>> &getMemories();
    const Mainboard &getMainboard();

    std::size_t getUID();
    void setUID(std::size_t uid);

  private:

    std::vector<std::unique_ptr<CPU>> cpus_;
    std::vector<std::shared_ptr<Memory>> memories_;
    std::unique_ptr<Mainboard> mainboard_;
    std::size_t uid_;
};

class PC : public Computer
{
  public:
    PC(std::unique_ptr<CPU> cpu,
        std::unique_ptr<Memory> memory,
        std::unique_ptr<Mainboard> mainboard);
};

class Laptop : public Computer
{
  public:
    Laptop(std::unique_ptr<CPU> cpu,
        std::unique_ptr<Memory> memory,
        std::unique_ptr<Mainboard> mainboard);
};
} // namespace Lab2
