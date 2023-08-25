#include "monty.h"
/**
 * f_pushs - adds node to stack
 * @head: stack head
 * @counter: line_number
 * Return: nil return
*/
void f_pushs(stack_t **head, unsigned int counter)
{
	int x, y = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			y++;
		for (; bus.arg[y] != '\0'; y++)
		{
			if (bus.arg[y] > 57 || bus.arg[y] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: use: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stacks(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: use: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE); }
	x = atoi(bus.arg);
	if (bus.lifi == 0)
		addnodes(head, x);
	else
		addqueues(head, x);
}
