/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:08:07 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/16 10:08:08 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/serialize.hpp"

int main() {
    Data data;
    data.number = 72;

    uintptr_t raw = Serialize::serialize(&data);
    std::cout << "Serialized raw adress (in decimal): " << raw << std::endl;

    Data* recovered = Serialize::deserialize(raw);
    std::cout << "Deserialized Data address: " << recovered << std::endl;
    std::cout << "Recovered number=" << recovered->number << std::endl;

    return 0;
}
