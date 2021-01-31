/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** c
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i;
    int result;
    
    for (i = 0; s1[i] == s2[i] && s2[i] != '\0' && s1[i] != '\0'; i++);
    result = (s1[i] - s2[i]);
    return (result);
}
