#include "monty.h"
/**
 * addnode - Entry point
 * @head:input
 * @n:input
*/
void addnode(stack_t **head, int n)
{

	stack_t *d, *x;

	x = *head;
	d = malloc(sizeof(stack_t));
	if (d == NULL)
	{ printf("Error\n");
		exit(0); }
	if (x)
		x->prev = d;
	d->n = n;
	d->next = *head;
	d->prev = NULL;
	*head = d;
}

