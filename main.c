#include "monty.h"
/**
* mains - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int mains(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;
	bus_t bus = {NULL, NULL, NULL, 0};

	if (argc != 2)
	{
		fprintf(stderr, "use: monty files\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Err: can't open files %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	free_stacks(stack);
	fclose(file);
return (0);
}
