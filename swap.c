#include "monty.h"
/**
 * f_swap - Entry point
 * @head: input
 * @counter: input
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *i;
	int l = 0, x;

	i = *head;
	while (i)
	{
		i = i->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	x = i->n;
	i->n = i->next->n;
	i->next->n = x;
}

