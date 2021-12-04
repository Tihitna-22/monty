#include "monty.h"
/**
 * get_func - checks string and executes the appropriate function
 * @command: command to execute
 * @stack: pointer to stack
 * @line_number: line number of command
 */
void get_func(char *command, stack_t **stack, unsigned int line_number)
{
	unsigned int i = 0;
	instruction_t commands[] = {
		{"push", push}, {"pall", pall},
		{"pint", pint}, {"pop", pop},
		{"swap", swap}, {"add", add},
		{"nop", nop}, {"sub", sub},
		{"div", div_op}, {"mul", mul_op}, 
		{"mod", mod}, {"pchar", pchar},{"pstr", pstr},
		{NULL, NULL}
	};
	while (commands[i].opcode != NULL)
	{
		if (strcmp(commands[i].opcode, command) == 0)
		{
			commands[i].f(stack, line_number);
			return;
		}
		i++;
	}
	if (commands[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, command);
		exit(EXIT_FAILURE);
	}
}
