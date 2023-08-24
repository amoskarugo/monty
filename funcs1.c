#include "monty.h"


/**
 *push - function to insert into the stack.
 *@stack: pointer to top of the stack
 *@line_number: data to i inset into the stack.
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	(void)line_number;

	new = (stack_t *)malloc(sizeof(stack_t));

	new->n = value;
	if (*stack == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		(*stack) = new;
	}
	else
	{
		(*stack)->prev = new;
		new->next = *stack;
		(*stack) = new;
	}
}

/**
 *pall - prints all elements in a stack
 *@stack: pointer to top of the stack
 *@line_number: line number of the instruction in a file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	temp = *stack;

	(void)line_number;

	while (temp != NULL)
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->next;
	}

}

/**
 *pop - removes the top element from a stack
 *@line_number: file line number
 *@stack: pointer to stack
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

}
