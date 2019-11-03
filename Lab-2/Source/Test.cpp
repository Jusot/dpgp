#include <iostream>
#include "CompanyA.hpp"
#include "CompanyB.hpp"
#include "TestDept.hpp"
#include "Customer.hpp"
#include "IntelFactory.hpp"
#include "SamsungFactory.hpp"
#include "Types.h"

using namespace std;
using namespace Lab2;

int main(int argc, char *argv[])
{
    srand(time(nullptr));

    IntelFactory Intel;
    SamsungFactory Samsung;
    TestDept test_dept;
    CompanyA company_a(Intel, Samsung);
    CompanyB company_b(Intel, Samsung);
    Customer customer;

    // use map to specify components in a computer
    order_list_type order_list;
    order_list[FACTORY_SAMSUNG][COMPONENT_CPU] = 1;
    order_list[FACTORY_SAMSUNG][COMPONENT_MEMORY] = 1;
    order_list[FACTORY_SAMSUNG][COMPONENT_MOTHERBOARD] = 1;
    order_list[FACTORY_INTEL][COMPONENT_MEMORY] = 1;

    customer.purchase_PC(order_list, &company_a, &test_dept);

    order_list[FACTORY_INTEL][COMPONENT_MOTHERBOARD] = 1;
    customer.purchase_Laptop(order_list, &company_b, &test_dept);

    return 0;
}
