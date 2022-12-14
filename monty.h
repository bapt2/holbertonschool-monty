#ifndef _LIFO_FIFO
#define _LIFO_FIFO

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

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

/**
 * struct buffer - structure to store the buffer
 * @fd: File descriptor
 * @line: Line to getline
 *
 * Description: To handle the file and getline
 */
typedef struct buffer
{
	FILE *fd;
	char *line;
} buffer_t;

extern buffer_t buffer;
extern int value;

int _isdigit(char *c);
void push_error(FILE *fd, char *line, stack_t *stack, int count);
void ins_error(FILE *fd, char *line, stack_t *stack, char *count, int item);

void execute_cmd(char *argv);
int get_opc(stack_t **stack, char *arg, char *data, int linecount);
void _swap(unsigned int line_number, stack_t **stack);
void _add(stack_t **stack, unsigned int line_numbe);
void _push(unsigned int line_number, stack_t **stack);
void _pall(unsigned int ln, stack_t **stack);
void _pint(unsigned int line_number, stack_t **stack);
void _pop(unsigned int line_number, stack_t **stack);
void _nop(unsigned int line_number, stack_t **stack);

#endif
