#include "monty.h"
/**
  *f_sub- Entry point
  *@head: input
  *@counter:input
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *x;
	int s, n;

	x = *head;
	for (n = 0; x != NULL; n++)
		x = x->next;
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	s = x->next->n - x->n;
	x->next->n = s;
	*head = x->next;
	free(x);
}

