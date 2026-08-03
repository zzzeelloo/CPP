#include "../includes/serialize.hpp"

int main() {
    Data data;
    data.number = 72;

    uintptr_t raw = Serialize::serialize(&data);
    std::cout << "Serialized raw value: " << raw << std::endl;

    Data* recovered = Serialize::deserialize(raw);
    std::cout << "Deserialized Data address: " << recovered << std::endl;
    std::cout << "Recovered number=" << recovered->number << std::endl;

    return 0;
}
