#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
    std::cout << "===== TEST POLYMORPHISME CORRECT =====" << std::endl;

    const Animal* Ani = new Animal();
    const Animal* Frimousse = new Dog();
    const Animal* Mango = new Cat();

    std::cout << "Type Ani: " << Ani->getType() << std::endl;
    std::cout << "Type Frimousse: " << Frimousse->getType() << std::endl;
    std::cout << "Type Mango: " << Mango->getType() << std::endl;

    std::cout << std::endl;
    Ani->makeSound();
    Frimousse->makeSound();
    Mango->makeSound();

    std::cout << std::endl;
    delete Ani;
    delete Frimousse;
    delete Mango;

    std::cout << "\n===== TEST SANS VIRTUAL (WrongAnimal) =====" << std::endl;

    const WrongAnimal* wrongAni = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "Type wrongAni: " << wrongAni->getType() << std::endl;
    std::cout << "Type wrongCat: " << wrongCat->getType() << std::endl;

    std::cout << std::endl;
    wrongAni->makeSound();
    wrongCat->makeSound();

    std::cout << std::endl;
    delete wrongAni;
    delete wrongCat;

    return 0;
}


