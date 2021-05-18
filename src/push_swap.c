/*
** EPITECH PROJECT, 2020
** ush_swap
** File description:
** push_swap
*/

#include "my.h"
#include "structures.h"

void push_swap(DList l_a)
{
    DListNode *new_node = l_a;
    while (new_node->next->next != NULL) {
        if (l_a->begin->value > l_a->begin->next->value) {
            sa(l_a);
            sort_list(l_a);
        } else
            sort_list(l_a);
        new_node = new_node->next;
    }
}