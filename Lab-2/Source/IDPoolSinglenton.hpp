#pragma once

#include <string>

namespace Lab2
{
class IDPoolSiglenton
{
public:
    static IDPoolSiglenton& get_instance()
    {
        return unique_id_producer;
    }

    std::string get_id()
    {
        return std::to_string(id_++);
    }

private:
    static IDPoolSiglenton unique_id_producer;

    IDPoolSiglenton() : id_(0) { }
    size_t id_;
};

inline IDPoolSiglenton IDPoolSiglenton::unique_id_producer;

} // namespace Lab2
