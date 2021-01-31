/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** c
*/

void my_put_nbr(int nb)
{
    int nbr = 0;

    if (nb <= 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            nbr = (nb % 10);
            nb = (nb - nbr) / 10;
            my_put_nbr(nb);
            my_putchar(nbr + 48);
        } else {
            my_putchar(48 + nb % 10);
        }
    }
}
