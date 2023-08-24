#include "monty.h"
/**
 * f_pstrs - outputs string from the top of the stack,
 * followed by a new line
 * @head: stack heads
 * @counter: line_numbers
 * Return: nil return
*/
void f_pstrs(stack_t **head, unsigned int counter)
{
	stack_t *y;
	(void)counter;

	y = *head;
	while (y)
	{
		if (y->n > 127 || y->n <= 0)
		{
			break;
		}
		printf("%c", y->n);
		y = y->next;
	}
	printf("\n");
}
