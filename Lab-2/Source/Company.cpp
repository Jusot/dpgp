#include "Company.hpp"

using namespace std;

namespace Lab2
{
unique_ptr<Computer>
CompanyA::order(vector<Builder> cpus,
        vector<Builder> memories,
        Builder mainboard)
{
    auto pc = PC();
    for (auto cpu : cpus)
    {

    }
}

unique_ptr<Computer>
CompanyB::order(vector<Builder> cpus,
        vector<Builder> memories,
        Builder mainboard)
{

}
} // namespace Lab2
