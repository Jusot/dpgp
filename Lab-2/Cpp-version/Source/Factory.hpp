#pragma once

#include <string>
#include <memory>
#include <iostream>
#include "Component.hpp"
#include "Types.hpp"

namespace Lab2
{
class Computer;
// base class in Factory Pattern
class Factory
{
  public:
    virtual ~Factory() = default;
    std::unique_ptr<Computer> order_component(ComponentEnum comp)
    {
        auto component = produce_component(comp);
        return component;
    }
    virtual std::unique_ptr<Computer> produce_component(ComponentEnum) = 0;
};

// template class to reduce redundant code
template<FactoryEnum Fac>
class FactoryTemplate : public Factory
{
public:
    std::unique_ptr<Computer> produce_component(ComponentEnum comp) override
    {
        switch (comp)
        {
        case COMPONENT_CPU:
            return std::unique_ptr<Computer>(new Component<COMPONENT_CPU, Fac>(230, 0.92));
            break;
        case COMPONENT_MEMORY:
            return std::unique_ptr<Computer>(new Component<COMPONENT_MEMORY, Fac>(200, 0.91));
            break;
        case COMPONENT_MOTHERBOARD:
            return std::unique_ptr<Computer>(new Component<COMPONENT_MOTHERBOARD, Fac>(200, 0.91));
            break;
        default:
            break;
        }
        return std::unique_ptr<Computer>();
    }
};
} // namespace Lab2
