#include "monty.h"
/**
* free_stacks - releases doubly linked list
* @head: head of stack
*/
void free_stacks(stack_t *head)
{
	stack_t *auxs;

	auxs = head;
	while (head)
	{
		auxs = head->next;
		free(head);
		head = auxs;
	}
}
