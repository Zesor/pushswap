/*
** EPITECH PROJECT, 2020
** basic
** File description:
** basic_func
*/

#include "my.h"
#include "structures.h"

Bool is_empty_list(DList li)
{
    if (li == NULL)
        return true;
    return false;
}

void print_list(DList li)
{
    if (is_empty_list(li)) {
        my_printf("Rien a afficher\n");
        return;
    }
    for (DListNode *tmp = li->begin; tmp != NULL; tmp = tmp->next)
        my_printf("%d ", tmp->value);
}

int list_length(DList li)
{
    if (is_empty_list(li))
        return 0;
    return li->length;
}