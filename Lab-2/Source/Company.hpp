#pragma once

#include <memory>

namespace Lab2
{
class PC;
class Laptop;

class Company
{
  public:
    virtual ~Company() = default;
    virtual std::unique_ptr<PC>
    orderPC(/* args */) = 0;
    virtual std::unique_ptr<Laptop>
    orderLaptop(/* args */) = 0;
};

class CompanyA : public Company
{
  public:
    std::unique_ptr<PC> orderPC() override;
    std::unique_ptr<Laptop> orderLaptop() override;
};

class CompanyB : public Company
{
  public:
    std::unique_ptr<PC> orderPC() override;
    std::unique_ptr<Laptop> orderLaptop() override;
};
} // namespace Lab2
