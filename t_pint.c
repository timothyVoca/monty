#include "monty.h"

/**
 * _pint - function that prints the top element on the stack
 * @hstack: pointer to head of the stack
 * @line_number: where the instruction appears
 * Description: 1. pint
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void _pint(stack_t **hstack, unsigned int line_number)
{
	if (*hstack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(file);
		get_free(*hstack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hstack)->n);
}
