#include "monty.h"

/**
 * _mod - function that finds the modulus of top two elements
 * @hstack: pointer to the top of the stack
 * @line_number: where the line number appears
 * Description: 9. mod
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void _mod(stack_t **hstack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*hstack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(file);
		_free(*hstack);
		exit(EXIT_FAILURE);
	}
	else if ((*hstack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(file);
		_free(*hstack);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *hstack;
		second = first->next;
		second->n %= first->n;
		*hstack = second;
		(*hstack)->prev = NULL;
		free(first);
	}
}
