#include <iostream>
#include "../includes/Claptrap.hpp"

int main()
{
    std::cout << "==============================" << std::endl;
    std::cout << "   TEST 1 : Constructeurs" << std::endl;
    std::cout << "==============================" << std::endl;

    Claptrap a;                 // constructeur par défaut
    Claptrap b("Bobby");        // constructeur avec nom

    std::cout << "\n==============================" << std::endl;
    std::cout << "   TEST 2 : Attack normal" << std::endl;
    std::cout << "==============================" << std::endl;

    b.attack("Target1");

    std::cout << "\n==============================" << std::endl;
    std::cout << "   TEST 3 : takeDamage normal" << std::endl;
    std::cout << "==============================" << std::endl;

    b.takeDamage(3);
    b.takeDamage(2);

    std::cout << "\n==============================" << std::endl;
    std::cout << "   TEST 4 : beRepaired normal" << std::endl;
    std::cout << "==============================" << std::endl;

    b.beRepaired(5);

    std::cout << "\n==============================" << std::endl;
    std::cout << "   TEST 5 : takeDamage destruction (HP tombe à 0)" << std::endl;
    std::cout << "==============================" << std::endl;

    b.takeDamage(100); // destruction assurée

    std::cout << "\n==============================" << std::endl;
    std::cout << "   TEST 6 : attack après mort (HP = 0)" << std::endl;
    std::cout << "==============================" << std::endl;

    b.attack("Target2");

    std::cout << "\n==============================" << std::endl;
    std::cout << "   TEST 7 : repair après mort (HP = 0)" << std::endl;
    std::cout << "==============================" << std::endl;

    b.beRepaired(10);

    std::cout << "\n==============================" << std::endl;
    std::cout << "   TEST 8 : vider l'énergie (energyPoints = 0)" << std::endl;
    std::cout << "==============================" << std::endl;

    Claptrap c("EnergyTester");

    // on consomme toute l'énergie (10 actions)
    for (int i = 0; i < 10; i++)
        c.attack("Dummy");

    std::cout << "\n--- Tentative d'attaque avec énergie = 0 ---" << std::endl;
    c.attack("Dummy");

    std::cout << "\n--- Tentative de réparation avec énergie = 0 ---" << std::endl;
    c.beRepaired(5);

    std::cout << "\n==============================" << std::endl;
    std::cout << "   TEST 9 : Copie (copy constructor)" << std::endl;
    std::cout << "==============================" << std::endl;

    Claptrap copy(c);
    copy.attack("Someone"); // devrait échouer aussi car copie de energy = 0

    std::cout << "\n==============================" << std::endl;
    std::cout << "   TEST 10 : Assignation operator=" << std::endl;
    std::cout << "==============================" << std::endl;

    Claptrap d("AssignTarget");
    d = a; // a a encore HP=10, EP=10 normalement
    d.attack("Enemy");

    std::cout << "\n==============================" << std::endl;
    std::cout << "   TEST 11 : Auto-assignation" << std::endl;
    std::cout << "==============================" << std::endl;

    d = d; // doit pas casser

    std::cout << "\n==============================" << std::endl;
    std::cout << "   FIN DES TESTS" << std::endl;
    std::cout << "==============================" << std::endl;

    return 0;
}
