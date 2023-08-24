#include "monty.h"


/**
 *usage_err - print error message on the standard error
 *
 *
 */

void usage_err(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 *open_err - prints error message if file opening fails.
 *@argv: arguments vector.
 */
void open_err(char *argv[])
{
	fprintf(stderr, "Error: Cant't open file: %s\n", argv[1]);
	exit(EXIT_FAILURE);
}


/**
 *_invalid - fuction tp write error message incase of invalid instruction
 *@fd: file descriptor
 *@line_num: file line number
 *@opcode: instruction
 *@stack: pointer to top of the stack
 */
void _invalid(int line_num, FILE *fd, char *opcode, stack_t *stack)
{
	(void)stack;
	fprintf(stderr, "L%u: unknown instruction %s\n", line_num, opcode);
	fclose(fd);

	exit(EXIT_FAILURE);
}
/**
 *push_err - prints error message if push to the stack fails
 *@line_number: line number of the instruction on the file
 *@line: instruction
 *@fd: file descriptor
 *@stack: pointer to stack
 */
void push_err(int line_number, FILE *fd, char *line, stack_t *stack)
{
	(void)stack;
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	fclose(fd);
	free(line);
	exit(EXIT_FAILURE);
}
