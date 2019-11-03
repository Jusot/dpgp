#pragma once

#include <memory>
#include <vector>
#include <string>
#include <list>
#include <map>
#include <type_traits>
#include "IntelFactory.hpp"
#include "SamsungFactory.hpp"
#include "Types.h"

namespace Lab2
{
class Computer;
class PC;
class Laptop;

class Company
{
public:
    Company(IntelFactory& Intel, SamsungFactory& Samsung)
      : Intel_(Intel), Samsung_(Samsung)
    {
    }

    virtual std::unique_ptr<Computer> order_computer(order_list_type order_map) = 0;
protected:
    IntelFactory& Intel_;
    SamsungFactory& Samsung_;
};

// template classs, Product can be PC or Laptop
template<typename Product>
class CompanyTemplate : public Company
{
public:
    static_assert(std::is_same<Product, PC>::value || std::is_same<Product, Laptop>::value,
                  "Only PC and Laptop can instance");
    CompanyTemplate(IntelFactory& Intel, SamsungFactory& Samsung)
      : Company(Intel, Samsung)
    {
    }

    virtual std::unique_ptr<Computer> order_computer(order_list_type order_map) override
    {
        std::unique_ptr<Computer> ret(new Product);
        for (size_t i = 0; i < order_map[FACTORY_INTEL][COMPONENT_CPU]; ++i)
        {
            auto cpu = Intel_.order_component(COMPONENT_CPU);
            cpu->set_computer(std::move(ret));
            ret = std::move(cpu);
        }
        for (size_t i = 0; i < order_map[FACTORY_SAMSUNG][COMPONENT_CPU]; ++i)
        {
            auto cpu = Samsung_.order_component(COMPONENT_CPU);
            cpu->set_computer(std::move(ret));
            ret = std::move(cpu);
        }
        for (size_t i = 0; i < order_map[FACTORY_INTEL][COMPONENT_MEMORY]; ++i)
        {
            auto memory = Intel_.order_component(COMPONENT_MEMORY);
            memory->set_computer(std::move(ret));
            ret = std::move(memory);
        }
        for (size_t i = 0; i < order_map[FACTORY_SAMSUNG][COMPONENT_MEMORY]; ++i)
        {
            auto memory = Samsung_.order_component(COMPONENT_MEMORY);
            memory->set_computer(std::move(ret));
            ret = std::move(memory);
        }
        for (size_t i = 0; i < order_map[FACTORY_INTEL][COMPONENT_MOTHERBOARD]; ++i)
        {
            auto motherboard = Intel_.order_component(COMPONENT_MOTHERBOARD);
            motherboard->set_computer(std::move(ret));
            ret = std::move(motherboard);
        }
        for (size_t i = 0; i < order_map[FACTORY_SAMSUNG][COMPONENT_MOTHERBOARD]; ++i)
        {
            auto motherboard = Samsung_.order_component(COMPONENT_MOTHERBOARD);
            motherboard->set_computer(std::move(ret));
            ret = std::move(motherboard);
        }
        return ret;
    }

};

} // namespace Lab2
