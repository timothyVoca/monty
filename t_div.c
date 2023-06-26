#include "monty.h"

/**
 * _div - function that divides the top two elements of the stack
 * @hstack: pointer to the top of the stack
 * @line_number: where the line number appears
 * Description: 7. div
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void _div(stack_t **hstack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*hstack == NULL) || ((*hstack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(file);
		free(*hstack);
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
		second->n /= first->n;
		*hstack = second;
		(*hstack)->prev = NULL;
		free(first);
	}
}
