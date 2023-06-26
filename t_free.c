#include "monty.h"

/**
 *  _free - Free stack
 *
 *  @hstack: Stack pointer
 *
 *  Return: Void
 */

void _free(stack_t *hstack)
{
	if (hstack)
	{
		_free(hstack->next);
		free(hstack);
	}
}
