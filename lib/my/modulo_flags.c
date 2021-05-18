/*
** EPITECH PROJECT, 2020
** flags
** File description:
** flags
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

void modulo_flags(va_list *list)
{
    char c = va_arg(*list, int);

    write(1, "%", 1);
}