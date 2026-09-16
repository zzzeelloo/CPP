/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:08:21 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/16 10:08:22 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    std::cout << "identify reference test:" << std::endl;
    Base &ref = *ptr;
    identify(ref);

    delete ptr;

    return 0;
}
