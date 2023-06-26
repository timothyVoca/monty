#include "monty.h"

/**
 * _pall - function that prints all elements on the stack
 * @hstack: pointer to head of the stack
 * @line_number: where the instruction appears
 * Description: 0. push, pall
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void _pall(stack_t **hstack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *hstack;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		printf("\n");
	}
}
