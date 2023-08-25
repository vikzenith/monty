#include "monty.h"
/**
 * f_palls - output stack
 * @head: stack heads
 * @counter: no useds
 * Return: nil return
*/
void f_palls(stack_t **head, unsigned int counter)
{
	stack_t *y;
	(void)counter;

	y = *head;
	if (y == NULL)
		return;
	while (y)
	{
		printf("%d\n", y->n);
		y = y->next;
	}
}
