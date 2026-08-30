#pragma once

# include <algorithm>
# include <exception>
# include <iostream>
# include <limits>
# include <stdexcept>
# include <vector>

class span
{
private:
    std::vector<int> _numbers;
    unsigned int _maxSize;
    span();

public:
    span(unsigned int n);
    span(const span &other);
    span &operator=(const span &other);
    ~span();
    void addNumber(int number);
    void addRange(const std::vector<int> &numbers);
    int shortestSpan();
    int longestSpan();
};