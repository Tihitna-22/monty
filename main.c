#include "monty.h"
/**
 * main - entry point to the program
 * @argc: number of arguments
 * @argv: pointer to command line arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
        FILE *fp = NULL;
        char *buff = NULL;
        char *token;
        stack_t *stack = NULL;
        unsigned int line_number = 1;
        size_t len = 1;

        if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }

        fp = fopen(argv[1], "r");
        if (fp == NULL)
          {
                fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
                exit(EXIT_FAILURE);
          }
        while (getline(&buff, &len, fp) != -1)
        {
                token = strtok(buff, "  \t\n");
                if (token != NULL)
                       get_func(token, &stack, line_number);
                line_number++;
        }
        free(buff);
        fclose(fp);
        freestack(stack);
        return (0);
}
