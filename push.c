#include "monty.h"
/**
 * push - pushes an element to stack
 * @stack: address of pointer
 * @line_number: line number
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
        stack_t *temp = malloc(sizeof(stack_t));
        char *token = strtok(NULL, " \t\n");
        int i;
        int retval;

        for (i = 0; token[i]; i++)
        {
                if (i == 0 && token[i] == '-')
                        continue;
                if (isdigit(token[i]) == 0)
                        retval = 1;
                else
                {
                        retval = 0;
                }
        }
        if (token == NULL || retval == 1)
        {
                fprintf(stderr, "L%u: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
        }
        if (!temp)
        {
                fprintf(stderr, "Error: malloc failed\n");
                exit(EXIT_FAILURE);
        }
	
        temp->n = atoi(token);
        temp->prev = NULL;
        temp->next = *stack;
        if ((*stack) != NULL)
                (*stack)->prev = temp;
        *stack = temp;
}
