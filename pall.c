#include "monty.h"

/**
 * pall - print all values on `stack' starting from the top
 * @stack: double pointer to head of stack
 * @line_number: line number being executed from script file
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
        stack_t *temph;

        (void)(line_number);

        temph = *stack;
        while (temph != NULL)
        {
                printf("%d\n", temph->n);
                temph = temph->next;
                if (temph == *stack)
                {
                        return;
                }
        }
}
