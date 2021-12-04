#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack
 * @stack: pointer to stack
 * @line_number: line number
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	
	stack_t *temph;
	temph = *stack;
	(void)(line_number);	

	if (stack == NULL || *stack == NULL)
	{
	  printf("\n");
	  exit(EXIT_SUCCESS);
	}
	while ((temph != NULL && temph->n != '0') && (temph->n > 31 && temph->n < 127))
	  {
	    printf("%c", temph->n);
            temph = temph->next;
	  }
	printf("\n");
	
}
