#pragma once

#include "Factory.hpp"
#include "IntelCPU.hpp"
#include "IntelMemory.hpp"
#include "IntelMotherBoard.hpp"

namespace Lab2
{
class IntelFactory : public Factory
{
public:
    std::unique_ptr<Computer> produce_component(ComponentEnum comp) override
    {
        switch (comp)
        {
        case COMPONENT_CPU:
            return std::unique_ptr<Computer>(new IntelCPU(250, 0.91));
            break;
        case COMPONENT_MEMORY:
            return std::unique_ptr<Computer>(new IntelMemory(200, 0.92));
            break;
        case COMPONENT_MOTHERBOARD:
            return std::unique_ptr<Computer>(new IntelMotherBoard(250, 0.91));
            break;
        }
    }
};

} // namespace Lab2
