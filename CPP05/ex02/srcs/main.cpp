/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 08:10:22 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/14 08:10:44 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int	main( void )
{
	AForm		*shrub = new ShrubberyCreationForm("home");
	Bureaucrat	corr("Corrector", 1);
	Bureaucrat	me("Me", 140);
	std::cout << std::endl;

	corr.executeForm(*shrub);
	corr.signForm(*shrub);
	std::cout << *shrub << std::endl;
	std::cout << corr << std::endl;
	me.executeForm(*shrub);
	corr.executeForm(*shrub);
	delete shrub;

	std::cout << std::endl;
	std::cout << std::endl;

	AForm		*robotomy = new RobotomyRequestForm("Corrector");
	Bureaucrat	me2("Me", 1);

	me2.executeForm(*robotomy);
	me2.signForm(*robotomy);
	me2.executeForm(*robotomy);
	me2.executeForm(*robotomy);
	me2.executeForm(*robotomy);
	me2.executeForm(*robotomy);
	delete robotomy;
	
	std::cout << std::endl;
	std::cout << std::endl;

	AForm		*presidential = new PresidentialPardonForm("Corrector");
	Bureaucrat	me3("Me", 6);

	me3.executeForm(*presidential);
	me3.signForm(*presidential);
	me3.executeForm(*presidential);
	me3.incrementGrade();
	me3.executeForm(*presidential);
	delete presidential;

	return (0);
}