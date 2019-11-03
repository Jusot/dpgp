#pragma once

#include <iostream>
#include <map>
#include "CompanyA.hpp"
#include "CompanyB.hpp"
#include "TestDept.hpp"

namespace Lab2
{
class Customer
{
public:
    void purchase_PC(order_type order_map, Company* company, TestDept* test_dept)
    {
        if (dynamic_cast<CompanyA*>(company) == nullptr)
        {
            std::cout << "Only Company A produce PC!!\n";
        }
        else
        {
            purchase(order_map, company, test_dept);
        }
    }
    void purchase_Laptop(order_type order_map, Company* company, TestDept* test_dept)
    {
        if (dynamic_cast<CompanyB*>(company) == nullptr)
        {
            std::cout << "Only Company B produce Laptop!!\n";
        }
        else
        {
            purchase(order_map, company, test_dept);
        }
    }
private:
    // buy a computer from @company with components written in @order_map, and finally test by @test_dept
    void purchase(order_type order_map, Company* company, TestDept* test_dept)
    {
        auto comp = company->order_computer(order_map);
        std::cout << comp->get_desc() << "\n";
        std::cout << "It cost $" << comp->get_cost() << ".\n";
        test_dept->test(comp.get());
    }
};

} // namespace Lab2