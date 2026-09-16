/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:08:03 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/16 10:08:04 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <stdint.h>
#include <string>
#include <iostream>

typedef struct {
    int number;
} Data;

class Serialize
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
    private:
        Serialize();
        Serialize(const Serialize &other);
        Serialize &operator=(const Serialize &other);
        ~Serialize();
};

# endif