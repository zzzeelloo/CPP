#include "../includes/span.hpp"

span::span(unsigned int n) 
{
    _maxSize = n;
}

span::span(const span &other) 
{
    *this = other;
}

span &span::operator=(const span &other) 
{
    if (this != &other) 
    {
        _numbers = other._numbers;
        _maxSize = other._maxSize;
    }
    return *this;
}

span::~span() {}

void span::addNumber(int number)
{
    if (_numbers.size() >= _maxSize)
        throw std::out_of_range("Cannot add more numbers, span is full");
    _numbers.push_back(number);
}

void span::addRange(const std::vector<int> &numbers)
{
    if (numbers.size() > _maxSize || _numbers.size() + numbers.size() > _maxSize)
        throw std::out_of_range("Cannot add more numbers, span is full");
    _numbers.insert(_numbers.end(), numbers.begin(), numbers.end());
}

int span::shortestSpan()
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedNumbers.size(); ++i)
    {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

int span::longestSpan()
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    int minNumber = *std::min_element(_numbers.begin(), _numbers.end());
    int maxNumber = *std::max_element(_numbers.begin(), _numbers.end());

    return maxNumber - minNumber;
}
