#include "monty.h"

/**
 * _rotr - function that rotates the stack to the bottom.
 * @stack: double pointer to the head of stack
 * @line_number: script line number.
 *
 * The last element of the stack becomes the first one.
 * rotl never fails.
 *
 * Return: No return.
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_variable = *stack;

	(void)(line_number);
	if (*stack == NULL || (*stack)->next == NULL)
		return;
	while (temp_variable->next != NULL)
		temp_variable = temp_variable->next;
	temp_variable->next = *stack;
	temp_variable->prev->next = NULL;
	temp_variable->prev = NULL;
	(*stack)->prev = temp_variable;
	(*stack) = temp_variable;
}
