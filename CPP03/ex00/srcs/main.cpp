#include "../includes/Claptrap.hpp"

int main()
{
    Claptrap a;
    Claptrap b("Alfonso");
    Claptrap c(b);

    a = b;

    b.attack("Enemy");
    b.takeDamage(5);
    b.beRepaired(3);

    return 0;
}
