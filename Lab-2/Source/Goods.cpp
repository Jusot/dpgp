#include <cassert>
#include "Goods.hpp"
#include "Product.hpp"
#include "Factory.hpp"

using namespace std;

namespace Lab2
{
Computer::~Computer() {}

std::size_t Computer::getUID()
{
    return uid_;
}

void Computer::setUID(std::size_t uid)
{
    uid_ = uid;
}

vector<shared_ptr<CPU>> Computer::getCPUs()
{
    return {};
}

vector<shared_ptr<Memory>> Computer::getMemories()
{
    return {};
}

std::shared_ptr<Mainboard> Computer::getMainboard()
{
    return nullptr;
}

vector<shared_ptr<CPU>> AddCPU::getCPUs()
{
    auto cpus = pre_->getCPUs();
    cpus.emplace_back(builder_ == Builder::SAMSUNG
        ? SamsungFactory().createCPU()
        : IntelFactory().createCPU());
    return cpus;
}

vector<shared_ptr<Memory>> AddMemory::getMemories()
{
    auto memories = pre_->getMemories();
    memories.emplace_back(builder_ == Builder::SAMSUNG
        ? SamsungFactory().createMemory()
        : IntelFactory().createMemory());
    return memories;
}

shared_ptr<Mainboard> AddMainboard::getMainboard()
{
    assert(pre_->getMainboard() == nullptr);
    return builder_ == Builder::SAMSUNG
        ? SamsungFactory().createMainboard()
        : IntelFactory().createMainboard();
}
} // namespace Lab2
