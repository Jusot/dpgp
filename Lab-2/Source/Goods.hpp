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
        std::unique_ptr<Mainboard> mainboard)
      : cpu_(std::move(cpu)),
        memory_(std::move(memory)),
        mainboard_(std::move(mainboard_))
    {
        // ...
    }

    const CPU &getCPU()
    {
        return *cpu_;
    }

    const Memory &getMemory()
    {
        return *memory_;
    }

    const Mainboard &getMainboard()
    {
        return *mainboard_;
    }

  private:
    std::unique_ptr<CPU> cpu_;
    std::unique_ptr<Memory> memory_;
    std::unique_ptr<Mainboard> mainboard_;
};

class PC : public Computer
{
  public:
    PC(std::unique_ptr<CPU> cpu,
        std::unique_ptr<Memory> memory,
        std::unique_ptr<Mainboard> mainboard)
      : Computer(std::move(cpu), std::move(memory),
            std::move(mainboard))
    {
        // ...
    }
};

class Laptop : public Computer
{
  public:
    Laptop(std::unique_ptr<CPU> cpu,
        std::unique_ptr<Memory> memory,
        std::unique_ptr<Mainboard> mainboard)
      : Computer(std::move(cpu), std::move(memory),
            std::move(mainboard))
    {
        // ...
    }
};
} // namespace Lab2