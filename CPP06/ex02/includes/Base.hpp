/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:08:14 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/16 10:08:15 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <exception>

class Base
{
    public:
        virtual ~Base();
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);


class A : public Base {};
class B : public Base {};
class C : public Base {};

# endif