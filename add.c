#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: pointer to stack
 * @line_number: line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	int data;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	data = 0;
	data += (*stack)->n;
	pop(stack, line_number);
	(*stack)->n += data;
}
