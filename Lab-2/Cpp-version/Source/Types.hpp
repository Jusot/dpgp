#pragma once

#include <unordered_map>
#include <map>

namespace Lab2
{
// enum of all factories
enum FactoryEnum
{
    FACTORY_INTEL,
    FACTORY_SAMSUNG,
};

// enum of all components
enum ComponentEnum
{
    COMPONENT_CPU,
    COMPONENT_MEMORY,
    COMPONENT_MOTHERBOARD,
};

// use map to store components want to order
using order_type = std::map<FactoryEnum, std::map<ComponentEnum, size_t>>;

} // namespace Lab2
