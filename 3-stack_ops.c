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

/**
 *_div - divides the top element by the second top element in the stack
 *@stack: pointer to stack
 *@line_number: line number of the instruction
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int div_;
	stack_t *temp;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr,  "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		div_ = (*stack)->next->n / (*stack)->n;
		temp = (*stack)->next;
		temp->n = div_;
		free(*stack);
		(*stack) = temp;

	}

}


/**
 *mul - subtracts the top element from the second top element in the stack
 *@stack: pointer to stack
 *@line_number: line number of the instruction
 */
void mul(stack_t **stack, unsigned int line_number)
{
	int prod;
	stack_t *temp;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr,  "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		prod = (*stack)->next->n * (*stack)->n;
		temp = (*stack)->next;
		temp->n = prod;
		free(*stack);
		(*stack) = temp;

	}

}
