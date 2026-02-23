#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int ft_sum();
int ft_product();
int ft_factor();



char *s;

void unexpected(char c)
{
    if(c)
        printf("Unexpected token '%c'\n", c);
    else
        printf("Unexpected end of file\n");
}

int ft_sum()
{
    int sum1 = ft_product();
    int sum2;

    while (*s == '+')
    {
        s++;
        sum2 = ft_product();
        sum1 = sum1 + sum2;
    }
    return (sum1);
}

int ft_product()
{
    int n1 = ft_factor();
    int n2;
    while (*s == '*')
    {
        s++;
        n2 = ft_factor();
        n1 = n1 * n2;
    }
    return (n1);

}
int ft_factor()
{
    int z = 0;
    if (isdigit(*s))
        return (*s++ - '0');
    while (*s == '(')
    {
        s++;
        z = ft_sum();
        s++;
    }
    return (z);
}


int check_input(char *str)
{
    int i = 0;
    int par = 0;
    char last;

    while (str[i])
    {
        if(str[i] == '(')
            par++;
        else if (str[i] == ')')
            par--;
        else if (!isdigit(str[i]) && str[i] != '+' && str[i] != '*' && str[i] != '(' && str[i] != ')')
            return(unexpected(str[i]), 1);
        if (isdigit(str[i]) && isdigit(str[i + 1]))
            return(unexpected(str[i + 1]), 1);
        last = str[i];
        i++;
    }
    if (par < 0)
        return(unexpected(')'), 1);
    if (par > 0)
        return(unexpected('('), 1);
    if (last == '+' || last == '*')
        return(unexpected(0), 1);
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (1);
    if (check_input(av[1]))
        return (1);
    s = av[1];

    int res = ft_sum();
    printf("%d\n", res);
    return (0);
}