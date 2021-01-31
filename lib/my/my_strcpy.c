/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** c
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (dest[i] != '\0') {
        if (src[i] == '\0') {
            dest[i] = '\0';
            return (dest);
        } else {
            dest[i] = src[i];
        }
        i++;
    }
    return (dest);
}