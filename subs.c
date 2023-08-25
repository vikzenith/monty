#include "monty.h"
/**
  *f_subs- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_subs(stack_t **head, unsigned int counter)
{
	stack_t *auxs;
	int suss, nodes;

	auxs = *head;
	for (nodes = 0; auxs != NULL; nodes++)
		auxs = auxs->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stacks(*head);
		exit(EXIT_FAILURE);
	}
	auxs = *head;
	suss = auxs->next->n - auxs->n;
	auxs->next->n = suss;
	*head = auxs->next;
	free(auxs);
}
