#include "monty.h"
/**
  *f_rotrs- revolves the stack to bottom
  *@head: stack heads
  *@counter: line_numbers
  *Return: nil return
 */
void f_rotrs(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copys;

	copys = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copys->next)
	{
		copys = copys->next;
	}
	copys->next = *head;
	copys->prev->next = NULL;
	copys->prev = NULL;
	(*head)->prev = copys;
	(*head) = copys;
}
