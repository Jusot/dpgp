#pragma once

#include <string>
#include <iostream>
#include "Computer.hpp"
#include "IDPoolSinglenton.hpp"

namespace Lab2
{
class TestDept
{
public:
    bool test(Computer* comp)
    {
        auto desc = comp->get_desc();
        // CPU and Motherboard from different factories can't work together.
        if ((desc.find("CPU made from Intel") != std::string::npos &&
                desc.find("motherboard made from Samsung") != std::string::npos) ||
            (desc.find("CPU made from Samsung") != std::string::npos &&
                desc.find("motherboard made from Intel") != std::string::npos))
        {
            std::cout << "CPU and mother must be from the same factory.\n";
            return false;
        }

        // test all the components
        if (comp->test())
        {
            std::cout << "All is qualified.\n";
            auto id = IDPoolSiglenton::get_instance().get_id();
            comp->set_id(id);
            std::cout << "Its id is " << id << "\n";
            return true;
        }
        else
        {
            std::cout << "It is not qualified.\n";
            return false;
        }
    }
};

} // namespace Lab2
