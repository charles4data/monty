#include "monty.h"

/**
 * main - executes commands
 * @argc - number of arguments
 * @argv - array of the arguments
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
        if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }

        executeInstructions(argv[1]);

        return (0);
}
