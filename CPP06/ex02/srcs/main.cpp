#include "../includes/Base.hpp"

int main()
{
    std::srand(std::time(NULL));
    std::cout << "Testing generate():" << std::endl;
    Base *ptr = generate();
    if (!ptr)
    {
        std::cout << "Generation failed" << std::endl;
        return 1;
    }
    std::cout << "identify pointer test:" << std::endl;
    identify(ptr);
    identify(*ptr);

    std::cout << "identify reference test:" << std::endl;
    Base &ref = *ptr;
    identify(ref);

    delete ptr;

    return 0;
}
