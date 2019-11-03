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
        if ((desc.find("CPU made from Intel") != std::string::npos &&
                desc.find("motherboard made from Samsung") != std::string::npos) ||
            (desc.find("CPU made from Samsung") != std::string::npos &&
                desc.find("motherboard made from Intel") != std::string::npos))
        {
            std::cout << "CPU and mother must be from the same factory.\n";
            return false;
        }
        if (comp->test())
        {
            comp->set_id(IDPoolSiglenton::get_instance().get_id());
            return true;
        }
        else
        {
            return false;
        }
    }
};

} // namespace Lab2
