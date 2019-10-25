#include "Goods.hpp"

using namespace std;

namespace Lab2
{
Computer::Computer(std::vector<std::unique_ptr<CPU>> cpus,
    std::vector<std::shared_ptr<Memory>> memories,
    std::unique_ptr<Mainboard> mainboard)
    : cpus_(std::move(cpus)),
    memories_(std::move(memories)),
    mainboard_(std::move(mainboard_)),
    uid_(-1)
{
    // ...
}

const std::vector<std::unique_ptr<CPU>> &Computer::getCPUs()
{
    return cpus_;
}

const std::vector<std::shared_ptr<Memory>> &Computer::getMemories()
{
    return memories_;
}

const Mainboard &Computer::getMainboard()
{
    return *mainboard_;
}

std::size_t Computer::getUID()
{
    return uid_;
}

void Computer::setUID(std::size_t uid)
{
    uid_ = uid;
}

PC::PC(std::vector<std::unique_ptr<CPU>> cpus,
    std::vector<std::shared_ptr<Memory>> memories,
    std::unique_ptr<Mainboard> mainboard)
    : Computer(std::move(cpus), std::move(memories),
        std::move(mainboard))
{
    // ...
}

Laptop::Laptop(std::vector<std::unique_ptr<CPU>> cpus,
    std::vector<std::shared_ptr<Memory>> memories,
    std::unique_ptr<Mainboard> mainboard)
    : Computer(std::move(cpus), std::move(memories),
        std::move(mainboard))
{
    // ...
}
} // namespace Lab2
