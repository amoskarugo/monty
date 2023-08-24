#include "monty.h"

/**
 *execute - get contents of a file
 *@argv: arguments vector
 *Return: 0 success
 *
 */
int execute(char *argv[])
{
	int line_num = 1, j = 0;
	FILE *fd = fopen(argv[1], "r");
	char *token = NULL, *_int = NULL, delim[] = " \n\t\r";
	size_t n;
	stack_t *stack = NULL;
	instructions cmd = {NULL, NULL};

	cmd.fd = fopen(argv[1], "r");

	if (fd != NULL)
	{
		while (getline(&cmd.line, &n, cmd.fd) != -1)
		{
			token = strtok(cmd.line, delim);
			if (token == NULL)
			{
				continue;
			}
			else if (*token == '#')
				continue;
			_int = strtok(NULL, delim);

			j = get_function(&stack, token, _int, line_num);
			if (j == -1)
				push_err(line_num, fd, cmd.line, stack);
			else if (j == 1)
				_invalid(line_num, fd, token, stack);
			line_num++;
		}
		free(cmd.line);
		fclose(cmd.fd);


	}
	else
	{
		open_err(argv);
	}
	return (0);
}
