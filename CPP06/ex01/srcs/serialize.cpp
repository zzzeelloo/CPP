#include "../includes/serialize.hpp"

Serialize::Serialize() {}

Serialize::~Serialize() {}

Serialize::Serialize(const Serialize &other) 
{ 
    *this = other;
}

Serialize &Serialize::operator=(const Serialize &other)
{
    (void)other;
    return *this;
}

uintptr_t Serialize::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

