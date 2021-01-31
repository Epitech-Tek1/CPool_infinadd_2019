/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** concatenate two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int i;
    
    for (i = 0; dest[i] != '\0'; i++);
    for (int n = 0; src[n] != '\0'; n++) {
        dest[i] = src[n];
        i++;
    }
}