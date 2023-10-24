#include "monty.h"
/**
 * f_div - Entry point
 * @head: input
 * @counter: input
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	if (i->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = i->next->n / i->n;
	i->next->n = x;
	*head = i->next;
	free(i);
}

