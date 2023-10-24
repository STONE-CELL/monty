#include "monty.h"
/**
 * f_push - Entry point
 * @head:input
 * @counter:input
*/
void f_push(stack_t **head, unsigned int counter)
{
	int m, k = 0, f = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[j] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				f = 1; }
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	m = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, m);
	else
		addqueue(head, m);
}

