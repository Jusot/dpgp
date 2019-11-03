#pragma once

#include <unordered_map>
#include <map>

namespace Lab2
{
enum FactoryEnum
{
    FACTORY_INTEL = 0,
    FACTORY_SAMSUNG,
};

enum ComponentEnum
{
    COMPONENT_CPU = 0,
    COMPONENT_MEMORY,
    COMPONENT_MOTHERBOARD,
};

using order_list_type = std::map<FactoryEnum, std::map<ComponentEnum, size_t>>;

} // namespace Lab2