/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 12:10:47 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/13 12:10:48 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat 
{
    private:
    std::string name;
    unsigned int grade;

    public:
    Bureaucrat();
    Bureaucrat(std::string name, unsigned int grade);
    Bureaucrat(const Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &copy);

    std::string getName() const;
    unsigned int getGrade() const;
    
    void incrementGrade();
    void decrementGrade();

        class GradeTooHighException : public std::exception
        {
            public:
            const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
            const char* what() const throw();
        };

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);