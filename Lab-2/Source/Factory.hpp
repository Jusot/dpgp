#pragma once

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
    createMemroy() = 0;
    virtual std::unique_ptr<Mainboard>
    createMainboard() = 0;
};

class SamsungFactory : public Factory
{

};

class IntelFactory : public Factory
{

};
} // namespace Lab2
