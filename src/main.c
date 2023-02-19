/*
** EPITECH PROJECT, 2023
** project_name
** File description:
** main
*/
int my_str_to_int(char *str);
char *my_int_to_str(int nb);
int my_strlen(char *str);

//division
int div(int a, int b)
{
    return a / b;
}

//multiplication
int mul(int a, int b)
{
    return a * b;
}

//soustraction
int sus(int a, int b)
{
    return a - b;
}

//addition
int add(int a, int b)
{
    return a + b;
}

int main(int ac, char **av)
{
    if (ac < 2) {
        write(2, "not enough arguments\n", 21);
        return 84;
    }
    int nb = 0;
    
    ac = my_str_to_int(av[1]);
    nb = add(ac, ac - 1);
    nb = sus(nb, ac);
    nb = mul(nb, 2);

    write(1,"Your number is: ", 16);
    char *str = my_int_to_str(nb);
    write(1, str, my_strlen(str));
    write(1, "\n", 1);
    return 0;
}
