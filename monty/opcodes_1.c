#include "monty_header.h"

/**WE NEED TO CHECK WHAT THESE FUNCTION RETURN, I MEAN
 * IF WE MAKE CHANGES WITH PUSH, ADD, PINT, ETC WHAT HAPPENS
 * WITH THAT DOUBLY LINKED LIST?**/

/**
 * push - Function that pushes an element
 * to the stack
 * @stack: doubly linked list working as a stack
 * @line_number: line number of the specified opcode
 * Return: void
**/
void *push(stack_t **stack, unsigned int line_number)
{
	/**check errors and edge cases, not finished here yet**/

	stack_t *new_head = (stack_t *) malloc(sizeof(stack_t));

	if (new_head == NULL)
		return (0);

	new_head->n = n;
	new_head->next = (*head);
	new_head->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new_head;
	(*head) = new_head;
	return (new_head);
}

/**
 * pint - Function that prints the value at the top
 * of the stack, followed by a new line.
 * @h: list as an argument
 * Return: number of nodes of type size_t
**/
void pint(stack_t **stack, unsigned int line_number)
{
	/**check errors and edge cases, not finished here yet**/
	printf("%d\n", stack->n);
}

/**
  * free_dlistint - frees a list
  * @head: first element of list
  * Return: void
**/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (stack == NULL)
		/*perror and check other edge cases here*/

	if (head->next == NULL)
		{
			free(head);
			*head = NULL;
		}
		else
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(head);
		}
}
