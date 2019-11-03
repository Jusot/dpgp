#pragma once

#include <string>
#include "Computer.hpp"

namespace Lab2
{
class Laptop : public Computer
{
  public:
    Laptop(double cost = 50, const std::string& desc = "Laptop")
      : Computer(desc), cost_(cost)
    {
    }

    double get_cost() const override
    {
        return cost_;
    }

    bool test() const override
    {
        return true;
    }

    void set_id(const std::string& id) override
    {
        id_ = id;
    }
  private:
    double cost_;
    std::string id_;
};
}