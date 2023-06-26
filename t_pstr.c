#include "monty.h"

/**
 * _pstr - function that prints ascii value of elements
 * @hstack: pointer to head of the stack
 * @line_number: where the instruction appears
 * Description: 12. pstr
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */

void _pstr(stack_t **hstack, unsigned int line_number)
{
	stack_t *top_node = *hstack;

	(void)line_number;

	if ((hstack == NULL) || (*hstack == NULL))
	{
		printf("\n");
	}
	else
	{
		while (top_node != NULL)
		{
			if ((top_node->n > 0) && (isascii(top_node->n)))
			{
				printf("%c", top_node->n);
				top_node = top_node->next;
			}
			else
			{
				break;
			}
		}
		printf("\n");
	}
}
