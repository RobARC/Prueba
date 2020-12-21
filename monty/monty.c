#include "monty_header.h"
/*
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	FILE *OPFile;
	ssize_t read = 0;
	size_t len = 0;
	char *line = NULL, *token_op = NULL, *token = NULL;
	int line_number = 1;
	stack_t *stack = NULL;

	if (argc != 2)
	{	
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	OPFile = fopen(argv[1], "r");

	if (OPFile == NULL)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
		puts("Abrio archivo");
	
	while ((read = getline(&line, &len, OPFile)) != -1)
	{
		printf("%d ", line_number);
		token = strtok(line, DELIM);
		token_op = token;
		printf("This is token_op: %s ", token_op);
		while (token != NULL)
		{
			token = strtok(NULL, DELIM);
			pushed_integer = token;
			if ((strcmp(token_op, "push") == 0) && (token == NULL))
			{
				printf("entró en la comparación rara\n");
				exit(EXIT_FAILURE);
			}
			op_int_evaluator(token_op, &stack, line_number);
			printf("This is token int: %s \n", token);
			break;
		}		
		line_number++;
}
return 0;
}