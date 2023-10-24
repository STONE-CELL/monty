#include "monty.h"
/**
 * f_queue - Entry point
 * @head: input
 * @counter:input
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Entry point
 * @n: input
 * @head: input
*/
void addqueue(stack_t **head, int n)
{
	stack_t *d, *x;

	x = *head;
	d = malloc(sizeof(stack_t));
	if (d == NULL)
	{
		printf("Error\n");
	}
	d->n = n;
	d->next = NULL;
	if (x)
	{
		while (x->next)
			x = x->next;
	}
	if (!x)
	{
		*head = d;
		d->prev = NULL;
	}
	else
	{
		x->next = d;
		d->prev = x;
	}
}

