#include "monty.h"
/**
 * f_pints - outputs the top
 * @head: stack heads
 * @counter: line_numbers
 * Return: nil return
*/
void f_pints(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: don't pint, empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
