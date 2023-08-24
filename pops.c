#include "monty.h"
/**
 * f_pops - outputs the top
 * @head: stack heads
 * @counter: line_numbers
 * Return: nil return
*/
void f_pops(stack_t **head, unsigned int counter)
{
	stack_t *y;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: don't pop empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE);
	}
	y = *head;
	*head = y->next;
	free(y);
}
