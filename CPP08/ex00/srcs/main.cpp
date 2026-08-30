#include "../includes/easyFind.hpp"

int main()
{
    std::vector<int> myvec;

    for(int i = 0; i < 5; ++i)
        myvec.push_back(i);

    
    std::vector<int>::iterator it = myvec.begin();
    try
    {
        it = easyfind(myvec, 3);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        it = easyfind(myvec, 6);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}