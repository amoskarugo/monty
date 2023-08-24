#include "monty.h"
/**
 *pstr - prints string give the ascii value
 *@stack: pointer to stack
 *@line_number: line number on file
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	char character;
	stack_t *temp;

	(void)line_number;

	temp = *stack;
	if (!(*stack))
	{
		printf("\n");
		/*exit(EXIT_FAILURE);*/
	}
	else
	{
		while (temp != NULL)
		{
			if ((temp)->n <= 0 || (temp)->n > 127)
				break;

			character = (char)temp->n;
			temp = temp->next;
			printf("%c", character);
		}
		printf("\n");
	}
}
