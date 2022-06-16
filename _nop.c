#include "monty.h"

/**
 * _nop - function that doesn't do anythin.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Usage: nop .
 *
 * Return: No return.
 */

void _nop(stack_t **stack, unsigned int line_number)
{
	(void)(stack);
	(void)(line_number);
}
