#include "monty.h"
/**
 * f_pall - Entry point
 * @head:input
 * @counter:input
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *i;
	(void)counter;

	i = *head;
	if (i == NULL)
		return;
	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
	}
}

