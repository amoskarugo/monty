#include "monty.h"
/**
*isdigit_ - checks whether the argument is a digit
*@s: element to check
*Return: 1 if it is a digit else -1
*/
int isdigit_(const char *s)
{
	if (s == NULL)
		return (-1);
	if (*s == '-')
	{
		s++;
	}
	while (*s)
	{

	if (*s < '0' || *s > '9')
		return (-1);
	s++;
	}
	return (1);
}

/**
 *free_mem - free a linked list
 *@stack: pointer to stack
 *
 *
 */
void free_mem(stack_t **stack)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		stack_t *temp = current;

		current = current->next;
		free(temp);
	}
}
