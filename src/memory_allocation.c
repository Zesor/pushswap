/*
** EPITECH PROJECT, 2020
** memory
** File description:
** memory
*/

#include "my.h"
#include "structures.h"

DList *my_realloc(void)
{
    DList li = malloc(sizeof(DList));

    if (li == NULL)
        return NULL;
    li->length = 0;
    li->begin = NULL;
    li->end = NULL;

    free(li->begin);
}

void free_my_list(DList li)
{
    for (DListNode *curr = li->begin; curr != NULL; curr = curr->next) {
        free(curr);
    }
}