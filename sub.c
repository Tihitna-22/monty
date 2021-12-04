#include "monty.h"
/**
 * sub - subtracts the top element of the stack from the second top element of stack
 * @stack: pointer to stack
 * @line_number: line number
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
        int data;

        if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        {
	  fprintf(stderr, "L%d: can't sub, stack too short", line_number);
	  exit(EXIT_FAILURE);
        }
        data = 0;
        data += (*stack)->n;
        pop(stack, line_number);
        (*stack)->n -= data;
}
