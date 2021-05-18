/*
** EPITECH PROJECT, 2020
** lb
** File description:
** lb
*/

#include "my.h"
#include "structures.h"

/*int sb(DListNode *li)
{
    swap_two_first(li);
    write(2, "sb ", 3);
    return (0);
}*/

int pb(DList l_a, DList l_b)
{
    int  x;

    if (l_a == NULL)
        return 84;
    x = l_a->begin->value;
    insert_end(l_b, x);
    l_a->begin = l_a->begin->next;
    write(1, "pb ", 3);
}

/*int rb(DListNode *li)
{
    rotate_begin_to_end(li);
    write(2, "rb ", 3);
    return (0);
}

int rr(DListNode *li)
{
    ra(li);
    rb(li);
    write(2, "rr ", 3);
    return (0);
}*/