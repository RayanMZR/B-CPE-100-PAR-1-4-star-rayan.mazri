/*
** EPITECH PROJECT, 2022
** diagonal_star
** File description:
** star
*/

void my_putchar(char c);

void diagonal_line_top(int nb)
{
    int space = 0;
    int space_mid = 6 * nb - 6;
    for (int j = 0; j < nb; j++) {
        for (int i = 0; i <= space; i++)
            my_putchar(' ');
        my_putchar('*');
        for (int k = 0; k <= space_mid; k++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
        space++;
        space_mid -= 2;
    }
}

void diagonal_line_down(int nb)
{
    int space = nb - 2;
    int space_mid = 4 * nb - 2;
    for (int j = 1; j < nb; j++) {
        for (int i = 0; i <= space; i++)
            my_putchar(' ');
        my_putchar('*');
        for (int k = 0; k <= space_mid; k++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
        space--;
        space_mid += 2;
    }
}
