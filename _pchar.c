#include "monty.h"

/**
 * _pchar - function that prints the char at the top of the stack.
 * @stack: double pointer to the head of stack
 * @line_number: script line number.
 *
 * The integer stored at the top of the stack is treated as the ascii,
 * value of the character to be printed.
 * If the value is not in the ascii table (man ascii) print the error,
 * message L<line_number>: can't pchar, value out of range, followed by,
 * a new line, and exit with the status EXIT_FAILURE.
 * If the stack is empty, print the error message:
 * L<line_number>: can't pchar, stack empty, followed by a new line, and,
 * exit with the status EXIT_FAILURE .
 *
 * Return: No return.
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int ch;

	if (!(*stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	ch = (*stack)->n;
	if (!isascii(ch))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ch);
}
