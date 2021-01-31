/*
** EPITECH PROJECT, 2019
** infin_add
** File description:
** make an infinite calculator
*/

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h> 
#include <unistd.h>
#include "include/my.h"
#include "include/infin_add_f.h"

int add(char *str1, char *str2)
{
    char *result;
    int retenu = 0;
    int swap = 0;
    int i = 0;
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);

    if (len1 > len2)
        result = malloc(len1 + 2);
    else
        result = malloc(len2 + 2);
    if (NULL == result)
        return (0);

    for (i = 1; i <= len1 && i <= len2; i++) {
        swap = str1[len1 - i] + str2[len2 - i] + retenu - 48;
        retenu = 0;
        if (swap > '9') {
            swap -= 10;
            retenu++;
        }
        result[i - 1] = swap;
    }
    i--;
    if (1 == retenu)
        result[i] = '1';
    if (str1[i])
        for (;i < len1; i++) {
            result[i] = str1[len1 - i - 1] + retenu;
            retenu = 0;
            if (result[i] > '9') {
                result[i] -= 10;
                retenu++;
            }
        }
    if (str2[i])
        for (;i < len2; i++) {
            result[i] = str2[len2 - i - 1] + retenu;
            retenu = 0;
            if (result[i] > '9') {
                result[i] -= 10;
                retenu++;
            }
        }
    if (retenu == 1) {
        result[i] = '1';
        result[i + 1] = '\0';
    }
    my_putstr(my_revstr(result));
}

int main(int ac, char **av)
{
    add(av[1], av[2]);
    return (0);
}