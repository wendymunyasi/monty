#include "monty.h"

/**
 * _pstr - function that prints the string starting at top of the stack.
 * @stack: double pointer to the head of stack
 * @line_number: script line number.
 *
 * The integer stored at the top of the stack is treated as the ascii,
 * value of the character to be printed.
 * The string stops when either: the stack is over, the value of the,
 * element is 0 or the value of the element is not in the ascii table.
 * If the stack is empty, print only a new line.
 *
 * Return: No return.
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_variable = *stack;

	(void)(line_number);
	if (!(*stack))
	{
		printf("\n");
		return;
	}
	while (temp_variable)
	{
		if (isascii(temp_variable->n) && temp_variable->n != 0)
			putchar(temp_variable->n);
		else
			break;
		temp_variable = temp_variable->next;
	}
	putchar('\n');
}
