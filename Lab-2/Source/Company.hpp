#pragma once

#include <memory>
#include <string>

namespace Lab2
{
class PC;
class Laptop;

class Company
{
  public:
    virtual ~Company() = default;

    virtual std::unique_ptr<PC>
    orderPC(int numOfCPUs, std::string nameOfCPU,
        int numOfMemories, std::string nameOfMemory,
        std::string nameOfMainboard) = 0;

    virtual std::unique_ptr<Laptop>
    orderLaptop(int numOfCPUs, std::string nameOfCPU,
        int numOfMemories, std::string nameOfMemory,
        std::string nameOfMainboard) = 0;
};

class CompanyA : public Company
{
  public:
    std::unique_ptr<PC> orderPC(int numOfCPUs, std::string nameOfCPU,
        int numOfMemories, std::string nameOfMemory,
        std::string nameOfMainboard) override;
    std::unique_ptr<Laptop> orderLaptop(int numOfCPUs, std::string nameOfCPU,
        int numOfMemories, std::string nameOfMemory,
        std::string nameOfMainboard) override;
};

class CompanyB : public Company
{
  public:
    std::unique_ptr<PC> orderPC(int numOfCPUs, std::string nameOfCPU,
        int numOfMemories, std::string nameOfMemory,
        std::string nameOfMainboard) override;
    std::unique_ptr<Laptop> orderLaptop(int numOfCPUs, std::string nameOfCPU,
        int numOfMemories, std::string nameOfMemory,
        std::string nameOfMainboard) override;
};
} // namespace Lab2
