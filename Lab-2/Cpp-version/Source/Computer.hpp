#pragma once

#include <string>
#include <memory>

namespace Lab2
{

// base class in the Decorator Pattern
class Computer
{
public:
    Computer(const std::string& desc = "")
      : desc_(desc)
    {
    }

    virtual ~Computer() = default;
    virtual double get_cost() const = 0;
    virtual bool test() const = 0;
    virtual std::string get_desc() const
    {
        return desc_;
    }
    void desc_append(const std::string& str)
    {
        desc_.append(str);
    }
    virtual void set_computer(std::unique_ptr<Computer>&&) { }
    virtual void set_id(const std::string& id) = 0;
private:
    std::string desc_;
};

} // namespace Lab2