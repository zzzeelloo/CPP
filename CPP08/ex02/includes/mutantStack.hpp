#pragma once

#include <stack>

template <typename Type, typename Container = std::deque<Type> >
class MutantStack : public std::stack<Type, Container>
{
    public:
    MutantStack() : std::stack<Type, Container>() {}
    MutantStack(const MutantStack &other) : std::stack<Type, Container>(other) {}
    MutantStack &operator=(const MutantStack &other)
    {
        if (this != &other)
            std::stack<Type, Container>::operator=(other);
        return *this;
    }
    ~MutantStack() {}

    typedef typename Container::iterator iterator;
    typedef typename Container::reverse_iterator const_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    iterator rbegin() { return this->c.rbegin(); }
    iterator rend() { return this->c.rend(); }
};