/*
** EPITECH PROJECT, 2022
** corn_star
** File description:
** star
*/

void my_putchar(char c);

void corn_top_star(int size)
{
    int size_max_star = 0;
    for (int i = 0; i < size; i++) {
        for (int k = 0; k < 2 * size + size - size_max_star - 1; k++)
            my_putchar(' ');
        size_max_star++;
        my_putchar('*');
        for (int m = 0; m < i * 2 - 1; m++)
            my_putchar(' ');
        if (i != 0)
            my_putchar('*');
        my_putchar('\n');
    }
}

void corn_down_star(int size)
{
    int size_max_star = size;
    for (int i = 0; i < size; i++) {
        for (int k = 0; k < 2 * size + size - size_max_star; k++)
            my_putchar(' ');
        my_putchar('*');
        for (int m = 0; m < (size_max_star - 1) * 2 - 1; m++)
            my_putchar(' ');
        if (i < size - 1)
            my_putchar('*');
        my_putchar('\n');
        size_max_star--;
    }
}
