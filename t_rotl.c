#include "monty.h"

/**
 * _rotl - function that rotates the tail to the top
 * @hstack: pointer to the top of the stack
 * @line_number: where the line number appears
 * Description: 13. rotl
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void _rotl(stack_t **hstack, unsigned int line_number)
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
		*hstack = first->next;
		last->next = first;
		first->prev = last;
		first->next = NULL;
		(*hstack)->prev = NULL;
	}
}
