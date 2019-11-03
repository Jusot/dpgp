#pragma once

#include "Computer.hpp"
#include <memory>

namespace Lab2
{

// decorator class
class ComputerDecorator : public Computer
{
public:
    explicit ComputerDecorator(std::unique_ptr<Computer>&& computer)
      : computer_(std::move(computer))
    {
    }

    ComputerDecorator() = default;

    std::string get_desc() const override
    {
        return computer_->get_desc() + ", " + Computer::get_desc();
    }

    void set_computer(std::unique_ptr<Computer>&& computer) override
    {
        computer_ = std::move(computer);
    }

    void set_id(const std::string& id) override
    {
        computer_->set_id(id);
    }

protected:
    std::string get_raw_desc() const
    {
        return Computer::get_desc();
    }

    // store base class's pointer
    std::unique_ptr<Computer> computer_;
};

} // namespace Lab2
