#pragma once

#include "Factory.hpp"
#include "SamsungCPU.hpp"
#include "SamsungMemory.hpp"
#include "SamsungMotherboard.hpp"

using namespace std;

namespace Lab2
{

// Specific factory, produce SamsungCPU, SamsungMemory and SamsungMotherboard
using SamsungFactory = FactoryTemplate<FACTORY_SAMSUNG>;

} // namespace Lab2
