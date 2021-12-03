#include "monty.h"
/**
 * div - adds the top two elements of the stack
 * @stack: pointer to stack
 * @line_number: line number
 *
 * Return: void
 */
void div_op(stack_t **stack, unsigned int line_number)
{
	int data;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	data = (*stack)->n;
	pop(stack, line_number);
	if(data == 0)
	  {
	    fprintf(stderr, "L%d: division by zero \n", line_number);
	    exit(EXIT_FAILURE);
	  }
	(*stack)->n /= data;
}
