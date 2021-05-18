/*
** EPITECH PROJECT, 2020
** algo
** File description:
** algo
*/

#include "my.h"
#include "structures.h"

void swap_two_first(DList li)
{
    int nb = 0;

    DListNode *node = li->begin;
    node = node->next;
    nb = li->begin->value;
    li->begin->value = node->value;
    node->value = nb;
}

void rotate_begin_to_end(DList li)
{
    DListNode *node = li->begin->next;
    insert_for_rotate(li, li->begin->value);
    free(li->begin);
    li->begin = node;
    node = li->begin;
    li->length--;
}

void sort_list(DList li)
{
    int tmp = 0;

    for (DListNode *curr = li->begin; curr->next != NULL; curr = curr->next) {
        for (DListNode *index = curr->next; index != NULL;
                                    index = index->next) {
            if (curr->value > index->value) {
                tmp = curr->value;
                curr->value = index->value;
                index->value = tmp;
            }
        }
    }
}