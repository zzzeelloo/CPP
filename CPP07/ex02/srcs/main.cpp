#include <iostream>
#include "../includes/array.hpp"

int	main(void)
{
	std::string code = "16D85ACC441674FBA2DF65190663F43A243E8FA5424E49143B520D3DF8AF68036E47114F20A16827E1B16612137E59ECD492E468BC6CD109F65388DC57A58E8942585C8D193B9673220";
	Array	<char>a(code.size());

	for (unsigned int i = 0; i < a.size(); ++i)
		a[i] = code[i];
	std::cout << "Array contain: ";
	for (unsigned int i = 0; i < a.size(); ++i)
		std::cout << a[i];
	std::cout << std::endl;
	
	try
	{
		std::cout << "we try to access out of array element" << std::endl;
		a[code.size()];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "copy constructor :" << std::endl;
	Array	<char>b(a);

	for (unsigned int i = 0; i < b.size(); ++i)
		std::cout << b[i];
	std::cout << std::endl;

	std::cout << std::endl << "assignement :" << std::endl;
	Array	<char>c;

	c = a;
	for (unsigned int i = 0; i < c.size(); ++i)
		std::cout << c[i];
	std::cout << std::endl;

	return (0);
}

