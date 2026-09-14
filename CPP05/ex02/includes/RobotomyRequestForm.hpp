/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 08:10:01 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/14 08:10:02 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private: 
    std::string _target;
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator=(RobotomyRequestForm &other);
    ~RobotomyRequestForm();
    
    RobotomyRequestForm(std::string target);

    void execute(Bureaucrat const &executor) const;
};