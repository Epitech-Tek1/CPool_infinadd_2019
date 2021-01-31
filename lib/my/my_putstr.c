/*
** EPITECH PROJECT,2019
** my_lib
** File description:
** library
*/

int my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}