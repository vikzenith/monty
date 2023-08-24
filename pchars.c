#include "monty.h"
/**
 * f_pchars - outputs the char at the top of stack,
 * followed by a new line
 * @head: stack heads
 * @counter: line_numbers
 * Return: nil return
*/
void f_pchars(stack_t **head, unsigned int counter)
{
	stack_t *y;

	y = *head;
	if (!y)
	{
		fprintf(stderr, "L%d: don't pchar, empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE);
	}
	if (y->n > 127 || y->n < 0)
	{
		fprintf(stderr, "L%d: don't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", y->n);
}
