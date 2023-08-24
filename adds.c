#include "monty.h"
/**
 * f_adds - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_adds(stack_t **head, unsigned int counter)
{
	stack_t *r;
	int lengh = 0, auxs;

	r = *head;
	while (r)
	{
		r = r->next;
		lengh++;
	}
	if (lengh < 2)
	{
		fprintf(stderr, "L%d: stack is short, won't add\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE);
	}
	r = *head;
	auxs = r->n + r->next->n;
	r->next->n = auxs;
	*head = r->next;
	free(r);
}
