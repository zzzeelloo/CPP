#include <iostream>
#include <unistd.h>

using namespace std;

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;

    if(ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                if(av[i][j] >= 97 && av[i][j] <= 122)
                    av[i][j] = av[i][j] - 32;
                write(1, &av[i][j], 1);
                j++;
            }
            if(i != ac - 1)
                write(1, " ", 1);
            i++;
        }
        write(1, "\n", 1);
    }
}