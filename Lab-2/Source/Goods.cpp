#include "Goods.hpp"

using namespace std;

namespace Lab2
{
Computer::Computer(std::unique_ptr<CPU> cpu,
    std::unique_ptr<Memory> memory,
    std::unique_ptr<Mainboard> mainboard)
    : cpu_(std::move(cpu)),
    memory_(std::move(memory)),
    mainboard_(std::move(mainboard_)),
    uid_(-1)
{
    // ...
}

const CPU &Computer::getCPU()
{
    return *cpu_;
}

const Memory &Computer::getMemory()
{
    return *memory_;
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

PC::PC(std::unique_ptr<CPU> cpu,
    std::unique_ptr<Memory> memory,
    std::unique_ptr<Mainboard> mainboard)
    : Computer(std::move(cpu), std::move(memory),
        std::move(mainboard))
{
    // ...
}

Laptop::Laptop(std::unique_ptr<CPU> cpu,
    std::unique_ptr<Memory> memory,
    std::unique_ptr<Mainboard> mainboard)
    : Computer(std::move(cpu), std::move(memory),
        std::move(mainboard))
{
    // ...
}
} // namespace Lab2
