#pragma once

#include <memory>
#include <vector>
#include <string>
#include "Goods.hpp"

namespace Lab2
{
class Computer;

class Company
{
  public:
    virtual ~Company() = default;

    virtual std::unique_ptr<Computer>
    order(vector<Builder> cpus,
        vector<Builder> memories,
        Builder mainboard) = 0;
};

class CompanyA : public Company
{
  public:
    std::unique_ptr<Computer>
    order(vector<Builder> cpus,
        vector<Builder> memories,
        Builder mainboard) override;
};

class CompanyB : public Company
{
  public:
    std::unique_ptr<Computer>
    order(vector<Builder> cpus,
        vector<Builder> memories,
        Builder mainboard) override;
};
} // namespace Lab2
