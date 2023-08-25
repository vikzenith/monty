#include "monty.h"
/**
 * addnodes - adds node to head stack
 * @head: head of stack
 * @n: new_values
 * Return: nil return
*/
void addnodes(stack_t **head, int n)
{

	stack_t *new_node, *auxs;

	auxs = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Err\n");
		exit(0); }
	if (auxs)
		auxs->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
