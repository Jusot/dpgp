#pragma once

#include <stdlib.h>
#include <iostream>
#include "Computer.hpp"
#include "ComputerDecorator.hpp"
#include "Types.hpp"

namespace Lab2
{

// template class, 
template<ComponentEnum Comp, FactoryEnum Fac>
class Component : public ComputerDecorator
{
public:
    Component(double cost , double pass_rate = 0.9)
      : cost_(cost), pass_rate_(pass_rate)
    {
        switch (Comp)
        {
        case COMPONENT_CPU:
            desc_append("CPU made from ");
            break;
        case COMPONENT_MEMORY:
            desc_append("memory made from ");
            break;
        case COMPONENT_MOTHERBOARD:
            desc_append("motherboard made from ");
            break;
        default:
            break;
        }

        switch (Fac)
        {
        case FACTORY_INTEL:
            desc_append("Intel");
            break;
        case FACTORY_SAMSUNG:
            desc_append("Samsung");
            break;
        default:
            break;
        }
    }

    // add all the costs
    double get_cost() const override
    {
        return computer_->get_cost() + cost_;
    }

    // every component has a certain pass rate
    bool test() const override
    {
        // use random to simulate the real-world test
        int rand = random() % 100;
        bool pass = rand < (pass_rate_ * 100);
        std::cout << get_raw_desc();
        if (pass)
        {
            std::cout << " is qualified.\n";
        }
        else
        {
            std::cout << " is not qualified.\nTest stop!!\n";
        }
        return pass && computer_->test();
    }

private:
    double cost_;
    double pass_rate_;
};

} // namespace Lab2
