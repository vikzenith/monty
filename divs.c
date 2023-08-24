#include "monty.h"
/**
 * f_divs - differs the top two elements of the stack.
 * @head: stack heads
 * @counter: line_numbers
 * Return: nil return
*/
void f_divs(stack_t **head, unsigned int counter)
{
	stack_t *y;
	int lengh = 0, auxs;

	y = *head;
	while (y)
	{
		y = y->next;
		lengh++;
	}
	if (lengh < 2)
	{
		fprintf(stderr, "L%d: don't div, stack is short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE);
	}
	y = *head;
	if (y->n == 0)
	{
		fprintf(stderr, "L%d: differs by 0\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE);
	}
	auxs = y->next->n / y->n;
	y->next->n = auxs;
	*head = y->next;
	free(y);
}
