/*
** EPITECH PROJECT, 2022
** main
** File description:
** star
*/

void my_putchar(char c);

void my_putstr(char const *str);

int my_strlen(char const *str);

void corn_top_star(int size);

void corn_down_star(int size);

void diagonal_line_top(int nb);

void diagonal_line_down(int nb);

void line_star(int nb);

void star_one(void)
{
    my_putstr("   *\n*** ***\n *   *\n*** ***\n   *\n");
}

void star(unsigned int size)
{
    if (size < 1)
        return;
    if (size == 1) {
        star_one();
        return;
    }
    corn_top_star(size);
    line_star(size);
    diagonal_line_top(size);
    diagonal_line_down(size);
    line_star(size);
    corn_down_star(size);
}
