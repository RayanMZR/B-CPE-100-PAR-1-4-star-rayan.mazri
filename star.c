/*
** EPITECH PROJECT, 2022
** line_star
** File description:
** piscineC
*/

void my_putchar(char c);

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int my_strlen(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

void line_star(int nb)
{
    int nb_space = ((nb * 2) - 2) - 1;
    for (int i = 0; i <= (nb * 2); i++)
        my_putchar('*');
    for (int i = 1; i <= nb_space; i++)
        my_putchar(' ');
    for (int i = 0; i <= nb * 2; i++)
        my_putchar('*');
    my_putchar('\n');
}
