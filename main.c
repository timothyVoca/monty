#include "monty.h"

/**
 * main - entry into interpreter
 * @argc: argc counter
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	stack_t *head = NULL;
	char  *str = NULL, *operator_array[2], *temp;
	size_t bufsize = 1024, line_count = 0;
	ssize_t _line;
	void (*operator_function)(stack_t **hstack, unsigned int line_number);

	if (argc != 2)
		fprintf(stderr, "USAGE: monty file\n"), exit(EXIT_FAILURE);
	file = fopen(argv[1], "r");
	if (file == NULL)
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]), exit(EXIT_FAILURE);
	while (1)
	{
		_line = getline(&str, &bufsize, file);
		if (_line == -1)
			break;
		line_count++;
		operator_array[0] = strtok(str, "\n ");
		if (operator_array[0] == NULL)
			_nop(&head, line_count);
		else if (strcmp("push", operator_array[0]) == 0)
		{
			temp = strtok(NULL, "\n ");

			_push(&head, line_count, temp);
		}
		else if (operator_array[0] != NULL && operator_array[0][0] != '#')
		{
			operator_function = go(operator_array[0], line_count, &head);

			if (operator_function == NULL && line_count == 0)
			{
				fprintf(stderr, "L%ld: unknown instruction %s\n",
					line_count, operator_array[0]), exit(EXIT_FAILURE);
			}
		operator_function(&head, line_count);
		}
	}
	fclose(file), free(str), get_free(head);
	return (0);
}
