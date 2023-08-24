#ifndef _MONTY_H_
#define _MONTY_H_

#define _GNU_SOURCE

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *struct byte_s - file descriptor and its contents
 *@fd: file descriptor
 *@line: line pointer
 */

typedef struct byte_s
{
	FILE *fd;
	char *line;
} instructions;

extern instructions cmd;
extern int value;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
extern stack_t stack;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void usage_err(void);
void _invalid(int line_num, FILE *fd, char *opcode, stack_t *stack);
void push_err(int line_number, FILE *fd, char *line, stack_t *stack);
void open_err(char *argv[]);
int execute(char *argv[]);
int get_function(stack_t **stack, char *cmd, char *data, int line_number);
void push(stack_t **stack, unsigned int line_number);
int isdigit_(const char *s);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
#endif