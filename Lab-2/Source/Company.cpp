#include "Company.hpp"
#include "Goods.hpp"

using namespace std;

namespace Lab2
{
unique_ptr<Computer>
CompanyA::order(vector<Builder> cpus,
        vector<Builder> memories,
        Builder mainboard)
{
    unique_ptr<Computer> pc = make_unique<PC>();
    for (auto builderOfCPU : cpus)
    {
        pc = make_unique<AddCPU>(move(pc), builderOfCPU);
    }
    for (auto builderOfMemory : memories)
    {
        pc = make_unique<AddMemory>(move(pc), builderOfMemory);
    }
    return make_unique<AddMainboard>(move(pc), mainboard);
}

unique_ptr<Computer>
CompanyB::order(vector<Builder> cpus,
        vector<Builder> memories,
        Builder mainboard)
{
    unique_ptr<Computer> pc = make_unique<PC>();
    for (auto builderOfCPU : cpus)
    {
        pc = make_unique<AddCPU>(move(pc), builderOfCPU);
    }
    for (auto builderOfMemory : memories)
    {
        pc = make_unique<AddMemory>(move(pc), builderOfMemory);
    }
    return make_unique<AddMainboard>(move(pc), mainboard);
}
} // namespace Lab2
