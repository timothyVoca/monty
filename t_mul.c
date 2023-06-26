#include "monty.h"

/**
 * _mul - function that multiples the top two elements of the stack
 * @hstack: pointer to the top of the stack
 * @line_number: where the line number appears
 * Description: 8. mul
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void _mul(stack_t **hstack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*hstack == NULL) || ((*hstack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *hstack;
		second = first->next;
		second->n *= first->n;
		*hstack = second;
		(*hstack)->prev = NULL;
		free(first);
	}
}
