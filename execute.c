#include "monty.h"
/**
* execute - Entry point
* @stack: input
* @counter:input
* @file:input
* @content:input
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int o = 0;
	char *p;

	p = strtok(content, " \n\t");
	if (p && p[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[o].opcode && p)
	{
		if (strcmp(p, opst[o].opcode) == 0)
		{	opst[o].f(stack, counter);
			return (0);
		}
		o++;
	}
	if (p && opst[o].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, p);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

