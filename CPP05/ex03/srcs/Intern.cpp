/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 08:13:32 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/14 08:13:51 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &other)
{
    (void) other;
}

Intern &Intern::operator=(Intern const &other)
{
    (void) other;
    return *this;
}

Intern::~Intern()
{
}

AForm *Intern::createShrubbery(std::string const &target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomy(std::string const &target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPardon(std::string const &target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string const &formName,
                        std::string const &target) const
{
    static std::string const names[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    static AForm *(*creators[])(std::string const &) = {
        &Intern::createShrubbery,
        &Intern::createRobotomy,
        &Intern::createPardon
    };

    for (int index = 0; index < 3; ++index)
    {
        if (formName == names[index])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return creators[index](target);
        }
    }
    std::cout << "Intern cannot create " << formName
              << ": unknown form" << std::endl;
    return NULL;
}