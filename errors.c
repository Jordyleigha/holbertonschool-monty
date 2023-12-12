#include "monty.h"

/**
 * malloc_error - prints malloc error messages.
 *
 * Return: (EXIT_FAILURE) always
 */
int malloc_error(void)
{
	fprintf(stderr, "ERROR: malloc failed\n");
	return (EXIT_FAILURE);
}
