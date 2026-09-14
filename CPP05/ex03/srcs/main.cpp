/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 08:13:54 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/14 08:14:14 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int main(void)
{
	Intern intern;
	AForm *form;

	form = intern.makeForm("robotomy request", "Bender");
	delete form;
	form = intern.makeForm("shrubbery creation", "garden");
	delete form;
	form = intern.makeForm("presidential pardon", "Arthur Dent");
	delete form;
	form = intern.makeForm("coffee request", "office");
	delete form;
	return 0;
}