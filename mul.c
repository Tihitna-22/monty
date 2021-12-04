#include "monty.h"
/**
 * mul - multiply the top two elements of the stack
 * @stack: pointer to stack
 * @line_number: line number
 *
 * Return: void
 */
void mul_op(stack_t **stack, unsigned int line_number)
{
	int data;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
	        fprintf(stderr, "L%d: can't mul, stack too short \n", line_number);
		exit(EXIT_FAILURE);
	}

	data = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n *= data;
}
