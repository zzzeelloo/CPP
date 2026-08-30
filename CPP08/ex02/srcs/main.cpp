#include <cstdlib>
#include <iostream>
#include <list>
#include "../includes/mutantStack.hpp"

int	main(void)
{
	std::list<int>					List;
	MutantStack<int, std::list<int> >	Mutant;

	for (int i = 0; i < 10; i++)
	{
		int num = std::rand() % 100;
		List.push_back(num);
		Mutant.push(num);
	}

    std::cout << "MutantStack contents:" << std::endl;
	for (MutantStack<int, std::list<int> >::iterator it = Mutant.begin();
		it != Mutant.end(); it++)
	{
		std::cout << *it << std::endl;
	}
    
    std::cout << "\nstd::list contents:" << std::endl;
	for (std::list<int>::iterator it = List.begin();
		it != List.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return (0);
}