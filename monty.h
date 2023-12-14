#ifndef MONTY_H
#define MONTY_H
#define MAX_SIZE 100

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Doubly linked list node structure
 * for stack, queues , LIFO and FIFO
 */
   typedef struct stack_s
   {
     int n;
     struct dlistint_s *prev;
     struct dlistint_s *next;
   }stack_t;

/**
 * struct instruction_s - opcode and it's function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and it's function
 * for stack, queue , LIFO and FIFO
 */
   typedef struct instruction_s
   {
     char *opcode;
     void (*f)(stack_t **stack, unsigned int line_number);
   }instruction_t;

#endif
