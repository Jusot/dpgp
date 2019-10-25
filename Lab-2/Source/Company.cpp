#include "Company.hpp"

using namespace std;

namespace Lab2
{
unique_ptr<PC>
CompanyA::orderPC(int numOfCPUs, std::string nameOfCPU,
    int numOfMemories, std::string nameOfMemory,
    std::string nameOfMainboard)
{

}

unique_ptr<Laptop>
CompanyA::orderLaptop(int numOfCPUs, std::string nameOfCPU,
    int numOfMemories, std::string nameOfMemory,
    std::string nameOfMainboard)
{

}

unique_ptr<PC>
CompanyB::orderPC(int numOfCPUs, std::string nameOfCPU,
    int numOfMemories, std::string nameOfMemory,
    std::string nameOfMainboard)
{

}

unique_ptr<Laptop>
CompanyB::orderLaptop(int numOfCPUs, std::string nameOfCPU,
    int numOfMemories, std::string nameOfMemory,
    std::string nameOfMainboard)
{

}
} // namespace Lab2
