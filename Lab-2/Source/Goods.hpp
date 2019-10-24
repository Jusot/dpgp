#pragma once

#include <memory>
#include <utility>

namespace Lab2
{
class CPU;
class Memory;
class Mainboard;

class Computer
{
  public:
    Computer(std::unique_ptr<CPU> cpu,
        std::unique_ptr<Memory> memory,
        std::unique_ptr<Mainboard> mainboard);

    const CPU &getCPU();
    const Memory &getMemory();
    const Mainboard &getMainboard();

    std::size_t getUID();
    void setUID(std::size_t uid);

  private:
    std::unique_ptr<CPU> cpu_;
    std::unique_ptr<Memory> memory_;
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
