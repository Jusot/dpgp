#pragma once

#include "Computer.hpp"

namespace Lab2
{
class PC : public Computer
{
  public:
    PC(double cost = 100, const std::string& desc = "PC")
      : Computer(desc),  cost_(cost)
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

} // namespace Lab2