#pragma once

#include <string>
#include <memory>
#include <iostream>
#include "Types.h"

namespace Lab2
{
class Computer;
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
} // namespace Lab2
