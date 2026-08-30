#include "../includes/span.hpp"

int main()
{
    const unsigned int size = 10000;
    span sp(size);

    std::vector<int> values;
    values.reserve(size);
    for (unsigned int i = 0; i < size; ++i)
        values.push_back(static_cast<int>(rand() % 10));

    sp.addRange(values);

    std::cout << "size: " << values.size() << std::endl;
    std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "longest span: " << sp.longestSpan() << std::endl;

    return 0;
}
