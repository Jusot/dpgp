#pragma once

#include "Factory.hpp"
#include "SamsungCPU.hpp"
#include "SamsungMemory.hpp"
#include "SamsungMotherboard.hpp"

using namespace std;

namespace Lab2
{
class SamsungFactory : public Factory
{
public:
    std::unique_ptr<Computer> produce_component(ComponentEnum comp) override
    {
        switch (comp)
        {
        case COMPONENT_CPU:
            return std::unique_ptr<Computer>(new SamsungCPU(230, 0.92));
            break;
        case COMPONENT_MEMORY:
            return std::unique_ptr<Computer>(new SamsungMemory(200, 0.91));
            break;
        case COMPONENT_MOTHERBOARD:
            return std::unique_ptr<Computer>(new SamsungMotherboard(200, 0.91));
            break;
        }
    }
};

} // namespace Lab2
