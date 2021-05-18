/*
** EPITECH PROJECT, 2020
** la
** File description:
** la
*/

#include "my.h"
#include "structures.h"

int sa(DList li)
{
    swap_two_first(li);
    write(1, "sa", 2);
    return (0);
}

void pa(DList l_a, DList l_b, DListNode *node_b)
{
    node_b = l_b->begin;
    insert_begin(l_a, node_b->value);
    if (l_b->begin->next == NULL) {
        free(l_b->begin);
        l_b->begin = NULL;
        l_b->length--;
    } else {
        l_b->begin = l_b->begin->next;
        l_b->length--;
    }
    if (l_b->begin == NULL) {
        write(1, "pa", 2);
        return;
    }
    write(1, "pa ", 3);
}

int ra(DList li)
{
    rotate_begin_to_end(li);
    write(1, "ra ", 3);
    return (0);
}

void ra_controle(DList l_a)
{
    for (int i = 0; i != 0; i = i - 1)
        ra(l_a);
}

void pa_controle(DList l_a, DList l_b, DListNode *node_b)
{
    for (node_b = l_b->begin; node_b != NULL; node_b = node_b->next)
        pa(l_a, l_b, node_b);
}
