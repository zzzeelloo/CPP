#include <iostream>
#include <cstring>

using namespace std;

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;

    if(ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            if(av[i][j] >= 97 && av[i][j] <= 122)
                av[i][j] = toupper(av[i][j]);
            cout << av[i][j];
            j++;
        }
        if(i != ac - 1)
            cout << " ";
        i++;
    }
    cout << "\n";
}
