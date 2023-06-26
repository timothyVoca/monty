#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure for stack, queues,
 * LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;



/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


extern FILE *file;
FILE *file;

void (*operator_function)(stack_t **, unsigned int);
void (*go(char *op_f, unsigned int l, stack_t **s))(stack_t**, unsigned int);


void _mod(stack_t **hstack, unsigned int line_number);
void _rotl(stack_t **hstack, unsigned int line_number);
void _pchar(stack_t **hstack, unsigned int line_number);
void _rotr(stack_t **hstack, unsigned int line_number);
void _swap(stack_t **hstack, unsigned int line_number);
void _add(stack_t **hstack, unsigned int line_number);
void _nop(stack_t **hstack, unsigned int line_number);
void _sub(stack_t **hstack, unsigned int line_number);
void _div(stack_t **hstack, unsigned int line_number);
void _mul(stack_t **hstack, unsigned int line_number);
void _push(stack_t **hstack, unsigned int line_number, char *temp);
void _pall(stack_t **hstack, unsigned int line_number);
void _pint(stack_t **hstack, unsigned int line_number);
void _pop(stack_t **hstack, unsigned int line_number);
void _pstr(stack_t **sstack, unsigned int line_number);

void _free(stack_t *hstack);
int _isdigit(char *str);


#endif /* MONTY_H */
