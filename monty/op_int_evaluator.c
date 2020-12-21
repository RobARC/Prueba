#include "monty_header.h"
/**
 * op_int_evaluator - function that will evaluate
 * the opcode and integer if provided
 * @opcode: given opcode
 * @unsigned int line_number: line number
 * Return: void
**/
void (*op_int_evaluator(char *given_opcode))(stack_t **stack, unsigned int line_number)
{
	instruction_t opcode_func[] = {{"push", op_push}, {"pall", op_pall},
		{"pint", op_pint}, {"pop", op_pop}, {"swap", op_swap}, {"add", op_add},
		{"nop", op_nop}, {NULL, NULL}}
	int counter;
	while(opcode_func[counter] != NULL)
	{
		if (*opcode_func[counter].opcode == *given_opcode)
			opcode_func[counter].f; /**pending to review if needed to exit or return something here when executing a function**/
		i++;
	}
}