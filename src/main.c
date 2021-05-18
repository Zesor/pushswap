/*
** EPITECH PROJECT, 2020
** test
** File description:
** test
*/

#include <stddef.h>
#include "structures.h"
#include "my.h"

int main(int ac, char **av)
{
    DList l_a = NULL;
    DListNode *node_a;
    DList l_b = NULL;
    DListNode *node_b;

    if (ac <= 2) {
        my_printf("USAGE : ./push_swap [list of two minimum]\n");
        return (84);
    }
    if (ac > 2) {
        for (; ac > 1; ac--) {
            l_a = insert_begin(l_a, my_atoi(av[ac - 1]));
        }
    }
    if (sorted_already(l_a) != 0)
        return 0;
    push_swap(l_a);
    my_printf("\n");
    return (0);
}