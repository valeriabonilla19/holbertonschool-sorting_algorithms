#include "sort.h"

/**
* insertion_sort_list - Sorts a doubly linked list using insertion sort
* @list: Double pointer to the head of the list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current, *temp;

if (!list || !*list || !(*list)->next)
return;

current = (*list)->next; /* Start from second node */
while (current)
{
temp = current;
while (temp->prev && temp->n < temp->prev->n)
{
/* Swap temp with its previous node */
listint_t *left = temp->prev;
listint_t *right = temp;

/* Link left's previous to right */
if (left->prev)
left->prev->next = right;
else
*list = right; /* Update head if left was first node */

if (right->next)
right->next->prev = left;

left->next = right->next;
right->prev = left->prev;

right->next = left;
left->prev = right;

print_list(*list); /* Print list after each swap */
}
current = current->next;
}
}
