#include "monty.h"

/**
 *  _rotr - Rotate the right
 *  @hstack: Stack
 *  @line_number: Line number
 *  Return: Void
 */
void _rotr(stack_t **hstack, unsigned int line_number)
{
	stack_t *first, *last;

	(void)line_number;

	if ((*hstack == NULL) || ((*hstack)->next == NULL))
	{
		;
	}
	else
	{
		first = last = *hstack;
		while (last->next)
		{
			last = last->next;
		}
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = first;
		first->prev = last;
		*hstack = last;
	}
}
