/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 08:12:57 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/14 08:12:58 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class AForm;

class Intern
{
    private:
        static AForm *createShrubbery(std::string const &target);
        static AForm *createRobotomy(std::string const &target);
        static AForm *createPardon(std::string const &target);

    public:
        Intern();
        Intern(Intern const &other);
        Intern &operator=(Intern const &other);
        ~Intern();

        AForm *makeForm(std::string const &formName,
                        std::string const &target) const;
};