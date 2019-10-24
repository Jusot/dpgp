#pragma once

#include <memory>

namespace Lab2
{
class PC;
class Laptop;

class Company
{
  public:
    std::unique_ptr<PC> orderPC(/* args */);
    std::unique_ptr<Laptop> orderLaptop(/* args */);
};
} // namespace Lab2
