#include "monty.h"

/**
 * _pchar - function that prints the char at the top of the stack
 * @hstack: pointer to head of the stack
 * @line_number: where the instruction appears
 * Description: 11. pchar
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void _pchar(stack_t **hstack, unsigned int line_number)
{
	if ((hstack == NULL) || ((*hstack) == NULL))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(file);
		_free(*hstack);
		exit(EXIT_FAILURE);
	}
	if (!(isascii((*hstack)->n)))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*hstack)->n);
}
