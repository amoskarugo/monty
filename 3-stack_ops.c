#include "monty.h"

/**
 *sub - subtracts the top element from the second top element in the stack
 *@stack: pointer to stack
 *@line_number: line number of the instruction
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int sub;
	stack_t *temp;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr,  "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		sub = (*stack)->next->n - (*stack)->n;
		temp = (*stack)->next;
		temp->n = sub;
		free(*stack);
		(*stack) = temp;

	}

}
