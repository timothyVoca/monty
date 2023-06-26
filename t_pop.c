#include "monty.h"

/**
 * _pop - function that pops the top element of the stack
 * @hstack: pointer to the top of the stack
 * @line_number: where the line number appears
 * Description: 2. pop
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void _pop(stack_t **hstack, unsigned int line_number)
{
	stack_t *first;

	if ((*hstack == NULL) || (hstack == NULL))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(file);
		_free(*hstack);
		exit(EXIT_FAILURE);
	}
	first = *hstack;
	*hstack = (*hstack)->next;
	if (first->next)
	{
		first->next->prev = NULL;
	}
	free(first);
}
