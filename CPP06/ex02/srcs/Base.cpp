#include "../includes/Base.hpp"
#include <ctime>

Base::~Base() {}

Base *generate(void)
{
    
    int r = std::rand() % 3;

    std::cout << "Generated random number: " << r << std::endl; // Debugging output

    switch (r)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr; // This should never happen
    }
}
void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a; // To avoid unused variable warning
    }
    catch (std::bad_cast&)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
            (void)b; // To avoid unused variable warning
        }
        catch (std::bad_cast&)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                (void)c; // To avoid unused variable warning
            }
            catch (std::bad_cast&)
            {
                std::cout << "Unknown type" << std::endl;
            }
        }
    }
}