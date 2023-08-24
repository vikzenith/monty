#include "monty.h"
/**
 * f_muls - multiply the top 2 elements of stack.
 * @head: stack heads
 * @counter: line_numbers
 * Return: nil return
*/
void f_muls(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: don't multi, stack is short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE);
	}
	y = *head;
	auxs = y->next->n * y->n;
	y->next->n = auxs;
	*head = y->next;
	free(y);
}
