#include "monty.h"
/**
  *f_rotls- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotls(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmps = *head, *auxs;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxs = (*head)->next;
	auxs->prev = NULL;
	while (tmps->next != NULL)
	{
		tmps = tmps->next;
	}
	tmps->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmps;
	(*head) = auxs;
}
