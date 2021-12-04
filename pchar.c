#include "monty.h"
/**
 * pchar - adds the top two elements of the stack
 * @stack: pointer to stack
 * @line_number: line number
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int data;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	

	data = 0;
	data += (*stack)->n;
	pop(stack, line_number);
	if(data < 65 || data > 122)
	  {
                fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
                exit(EXIT_FAILURE);

	  }
	printf("%c\n", data);
}
