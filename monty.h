#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - represents doubly linked list of a stack (or queue)
 * @n: int
 * @prev: arrows to prev element of stack or queue
 * @next: arrows to next element of stack or queue
 *
 * Description: structure of doubly linked list node
 * for stack, queues, LIFO, FIFO project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - var -args, file, line content
 * @arg: values
 * @file: arrows to monty files
 * @content: line contents
 * @lifi: flag change stack queue
 * Description: carry values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its func
 * @opcode: the opcode
 * @f: func to handle the opcode
 *
 * Description: opcode and its func
 * for stack, queues, LIFO, FIFO project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_pushs(stack_t **head, unsigned int number);
void f_palls(stack_t **head, unsigned int number);
void f_pints(stack_t **head, unsigned int number);
int executes(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stacks(stack_t *head);
void f_pops(stack_t **head, unsigned int counter);
void f_swaps(stack_t **head, unsigned int counter);
void f_adds(stack_t **head, unsigned int counter);
void f_nops(stack_t **head, unsigned int counter);
void f_subs(stack_t **head, unsigned int counter);
void f_divs(stack_t **head, unsigned int counter);
void f_muls(stack_t **head, unsigned int counter);
void f_mods(stack_t **head, unsigned int counter);
void f_pchars(stack_t **head, unsigned int counter);
void f_pstrs(stack_t **head, unsigned int counter);
void f_rotls(stack_t **head, unsigned int counter);
void f_rotrs(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnodes(stack_t **head, int n);
void addqueues(stack_t **head, int n);
void f_queues(stack_t **head, unsigned int counter);
void f_stacks(stack_t **head, unsigned int counter);
#endif
