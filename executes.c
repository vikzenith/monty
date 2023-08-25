#include "monty.h"
/**
* executes - executes opcode
* @stack: head linked list - stack
* @counter: line_counters
* @file: poiner to monty files
* @content: line contents
* Return: nil return
*/
int executes(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_pushs}, {"pall", f_palls}, {"pint", f_pints},
				{"pop", f_pops},
				{"swap", f_swaps},
				{"add", f_adds},
				{"nop", f_nops},
				{"sub", f_subs},
				{"div", f_divs},
				{"mul", f_muls},
				{"mod", f_mods},
				{"pchar", f_pchars},
				{"pstr", f_pstrs},
				{"rotl", f_rotls},
				{"rotr", f_rotrs},
				{"queue", f_queues},
				{"stack", f_stacks},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *ops;

	ops = strtok(content, " \n\t");
	if (ops && ops[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && ops)
	{
		if (strcmp(ops, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (ops && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: Instruction not recognized %s\n", counter, ops);
		fclose(file);
		free(content);
		free_stacks(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
