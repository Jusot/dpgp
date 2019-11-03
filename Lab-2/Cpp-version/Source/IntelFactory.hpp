#pragma once

#include "Factory.hpp"

namespace Lab2
{

// Specific factory, produce IntelCPU, IntelMemory and IntelMotherboard
using IntelFactory = FactoryTemplate<FACTORY_INTEL>;

} // namespace Lab2
