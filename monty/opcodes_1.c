#include "monty_header.h"

/**WE NEED TO CHECK WHAT THESE FUNCTION RETURN, I MEAN
 * IF WE MAKE CHANGES WITH PUSH, ADD, PINT, ETC WHAT HAPPENS
 * WITH THAT DOUBLY LINKED LIST?**/

/**
 * op_push - Function that pushes an element
 * to the stack
 * @top_stack: doubly linked list working as a stack
 * @line_number: line number of the specified opcode
 * Return: void
**/
void op_push(stack_t **stack, unsigned int line_number)
{
	
	stack_t *top_stack = (stack_t *) malloc(sizeof(stack_t));

	if (top_stack == NULL)
		exit(EXIT_FAILURE);

	if ((atoi(pushed_integer) == 0))
	{
		if (*pushed_integer != '0')
		{
			printf("L%d: usage:  push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}

	top_stack->n = atoi(pushed_integer);
	top_stack->next = (*stack);
	top_stack->prev = NULL;
	
	if ((*stack) != NULL)
		(*stack)->prev = top_stack;
	(*stack) = top_stack;

}