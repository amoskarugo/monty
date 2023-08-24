#include "monty.h"

/**
 *get_function - function to execute opcode
 *@stack: pointer to stack
 *@cmd: instruction
 *@data: data contained in the command
 *@line_number: file instruction line number
 *Return: 0 success, -1 if some requirements fail
 */
int get_function(stack_t **stack, char *cmd, char *data, int line_number)
{
	int i = 0;


	instruction_t insts[] = {
				{"push", &push},
				{"pop", &pop},
				{"pall", &pall},
				{NULL, NULL}};

	while (insts[i].opcode)
	{
		if ((strcmp(cmd, insts[i].opcode)) == 0)
		{
			if ((strcmp(cmd, "push")) == 0)
			{
				if (isdigit_(data) == 1)
					value = atoi(data);
				else
					return (-1);
			}
			insts[i].f(stack, (unsigned int)line_number);
			break;

		}
		i++;
	}
	if (!insts[i].opcode)
		return (-1);
	return (0);
}
