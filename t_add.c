#include "monty.h"

/**
 * _add - adds the top two elements of the stack
 * @hstack: point to the top of the stack
 * @line_number: where line number appears
 * Description: 4. add
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void _add(stack_t **hstack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*hstack == NULL) || ((*hstack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(file);
		free(*hstack);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *hstack;
		second = first->next;
		second->n += first->n;
		*hstack = second;
		(*hstack)->prev = NULL;
		free(first);
	}
}
