#include "monty.h"

/**
 * _rotl - function that rotates the stack to the top.
 * @stack: double pointer to the head of stack
 * @line_number: script line number.
 *
 * The top element of the stack becomes the last one, and the second top,
 * element of the stack becomes the first one.
 * rotl never fails.
 *
 * Return: No return.
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_variable = *stack, *new_top;

	(void)(line_number);
	if (*stack == NULL || (*stack)->next == NULL)
		return;
	new_top = (*stack)->next;
	new_top->prev = NULL;
	while (temp_variable->next != NULL)
		temp_variable = temp_variable->next;
	temp_variable->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = temp_variable;
	(*stack) = new_top;
}
