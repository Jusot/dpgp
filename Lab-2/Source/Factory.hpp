#pragma once

#include <string>
#include <memory>

namespace Lab2
{
class CPU;
class Memory;
class Mainboard;

class Factory
{
  public:
    virtual ~Factory() = default;
    virtual std::unique_ptr<CPU>
    createCPU() = 0;
    virtual std::unique_ptr<Memory>
    createMemory() = 0;
    virtual std::unique_ptr<Mainboard>
    createMainboard() = 0;
};

class SamsungFactory : public Factory
{
  public:
    std::unique_ptr<CPU> createCPU() override;
    std::unique_ptr<Memory> createMemory() override;
    std::unique_ptr<Mainboard> createMainboard() override;
};

class IntelFactory : public Factory
{
  public:
    std::unique_ptr<CPU> createCPU() override;
    std::unique_ptr<Memory> createMemory() override;
    std::unique_ptr<Mainboard> createMainboard() override;
};
} // namespace Lab2
