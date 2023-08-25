#include "monty.h"
/**
 * f_queues - outputs the top
 * @head: stack heads
 * @counter: line_numbers
 * Return: nil return
*/
void f_queues(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueues - adds nodes to tail stack
 * @n: new_values
 * @head: head of stacks
 * Return: nil return
*/
void addqueues(stack_t **head, int n)
{
	stack_t *new_nodes, *auxs;

	auxs = *head;
	new_nodes = malloc(sizeof(stack_t));
	if (new_nodes == NULL)
	{
		printf("Error\n");
	}
	new_nodes->n = n;
	new_nodes->next = NULL;
	if (auxs)
	{
		while (auxs->next)
			auxs = auxs->next;
	}
	if (!auxs)
	{
		*head = new_nodes;
		new_nodes->prev = NULL;
	}
	else
	{
		auxs->next = new_nodes;
		new_nodes->prev = auxs;
	}
}
