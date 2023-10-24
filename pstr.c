#include "monty.h"
/**
 * f_pstr - Entry point
 * @head:input
 * @counter:input
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *i;
	(void)counter;

	i = *head;
	while (i)
	{
		if (i->n > 127 || i->n <= 0)
		{
			break;
		}
		printf("%c", i->n);
		i = i->next;
	}
	printf("\n");
}

