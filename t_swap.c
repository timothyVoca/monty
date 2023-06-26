#include "monty.h"

/**
 * _swap - function that swaps the top two elements on the stack
 * @hstack: pointer to the top of the stack
 * @line_number: where the line number appears
 * Description: 3. swap
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void _swap(stack_t **hstack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*hstack == NULL) || ((*hstack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(file);
		_free(*hstack);
		exit(EXIT_FAILURE);
	}
	else if (*hstack)
	{
		first = *hstack;
		second = first->next;
		*hstack = second;
		first->next = second->next;
		if (second->next != NULL)
		{
			second->next->prev = first;
		}
		second->prev = NULL;
		second->next = first;
		first->prev = second;
	}
}
