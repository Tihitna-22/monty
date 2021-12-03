#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to stack
 * @line_number: line number
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
        stack_t *temp;
        int data;

        if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
        {
                fprintf(stderr, "L%d: can't swap, stack too short\n", line_numb\
er);
                exit(EXIT_FAILURE);
        }

        temp = (*stack);
        data = temp->n;
        temp->n = temp->next->n;
        temp->next->n = data;
}
