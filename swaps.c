#include "monty.h"
/**
 * f_swaps - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_swaps(stack_t **head, unsigned int counter)
{
	stack_t *r;
	int len = 0, auxs;

	r = *head;
	while (r)
	{
		r = r->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: stack too short, can't swap\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE);
	}
	r = *head;
	auxs = r->n;
	r->n = r->next->n;
	r->next->n = auxs;
}
