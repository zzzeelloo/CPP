#pragma once

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>


template <typename T>
typename T::iterator easyfind(T &container, int target)
{
    typename T::iterator it = std::find(container.begin(), container.end(), target);
    if(it == container.end())
        throw(std::out_of_range("Value not found in the container"));
    std::cout << "Value " << target << " found in the container" << std::endl;
    return it;
}
