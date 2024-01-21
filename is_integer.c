#include "monty.h"

/**
 * is_integer - Check if a string represents a valid integer.
 * @str: String to check.
 * Return: 1 if str is a valid integer, 0 otherwise.
 */

int is_integer(const char *str)
{
        if (!str || *str == '\0')
                return (0);

        while (*str) {
                if (!isdigit(*str) && *str != '-')
                        return 0;
                str++;
        }
        return (1);
}
