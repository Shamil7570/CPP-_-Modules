#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
    uintptr_t a = reinterpret_cast<uintptr_t>(ptr);
    return a;
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}