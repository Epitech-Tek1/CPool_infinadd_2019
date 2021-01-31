/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** allocates memory
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strdup(char const *src)
{
    int i;
    char *src_alloc = NULL;

    for (i = 0; src[i] != '\0'; i++);
    src_alloc = malloc((sizeof(char)) * i++);
    if (src_alloc == NULL)
        return (NULL);
    for (i = 0; src[i] != '\0'; i++)
        src_alloc[i] = src[i];
    return (src_alloc);
}