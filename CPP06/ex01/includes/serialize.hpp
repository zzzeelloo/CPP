# ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <stdint.h>
#include <string>
#include <iostream>

typedef struct {
    int number;
} Data;

class Serialize
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
    private:
        Serialize();
        Serialize(const Serialize &other);
        Serialize &operator=(const Serialize &other);
        ~Serialize();
};

# endif