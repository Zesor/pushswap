/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** my_atoi
*/

#include "my.h"

int my_atoi(char *str)
{
    int k = 0;
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            k = i;
            while (str[i] >= '0' && str[i] <= '9') {
                j = j * 10;
                j += str[i] - '0';
                i++;
            }
            if (str[k - 1] == '-')
                j *= -1;
            return (j);
        }
        else
            i++;
    }
    return (0);
}