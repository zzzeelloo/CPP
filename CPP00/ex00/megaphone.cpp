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
            cout <<  (char)toupper(av[i][j]);
            j++;
        }
        i++;
    }
    cout << endl;
}
