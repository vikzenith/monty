#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
        char *content = NULL;
        FILE *file;
        size_t size = 0;
        stack_t *stack = NULL;
        unsigned int counter = 0;

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
        while (fgets(content, size, file) != NULL)
        {
                counter++;
                executes(content, &stack, counter, file);
        }
        free_stacks(stack);
        fclose(file);
        return (0);
}
