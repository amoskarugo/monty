#include "monty.h"

/**
 *main - program Entry point.
 *@ac:  arguments count.
 *@argv: arguments vector.
 *Return: nothing.
 */

int main(int ac, char *argv[])
{

	if (ac != 2)
		usage_err();
	else
		execute(argv);

	return (0);
}
