#pragma once

#include <memory>
#include <utility>

namespace Lab2
{
class CPU
{
  public:
    virtual ~CPU() = default;
    virtual void runTest() = 0;
};

class Memory
{
  public:
    virtual ~Memory() = default;
    virtual void runTest() = 0;
};

class Mainboard
{
  public:
    virtual ~Mainboard() = default;
    virtual void runTest() = 0;
};

class SamsungCPU : public CPU
{
  public:
    void runTest() override;
};
} // namespace Lab2
