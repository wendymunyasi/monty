# Project Name
**0x19. C - Stacks, Queues - LIFO, FIFO**

## Author's Details
Name: *Wendy Munyasi.*

Email: *wendymunyasi@gmail.com*

Tel: *+254707240068.*

##  Requirements
*   Allowed editors: `vi`, `vim`, `emacs`.
*   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
*   Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
*   All your files should end with a new line.
*   You allowed to use a maximum of one global variable.
*   No more than 5 functions per file.
*   You are allowed to use the standard library.
*   The `main.c` files are used to test your functions, but you don’t have to push them to your repo.
*   The prototypes of all your functions should be included in your header file called `monty.h`.
*   All your header files should be include guarded.


##  More Info
*   Please use the following data structures for this project:

```
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
```

```
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
```

## Project Description
Learn about what  LIFO and FIFO mean.
What is a stack, and when to use it.
What is a queue, and when to use it.
What are the common implementations of stacks and queues.
What are the most common use cases of stacks and queues.
What is the proper way to use global variables.

## The Monty program Usage
* 	Usage: `monty file`
  	*	where `file` is the path to the file containing Monty byte code.
*   If the user does not give any file or more than one argument to your program, print the error message `USAGE: monty file`, followed by a new line, and exit with the status `EXIT_FAILURE`.
*	If, for any reason, it’'s not possible to open the file, print the error message `Error: Can't open file <file>`, followed by a new line, and exit with the status `.EXIT_FAILURE`.
	*	where `<file>` is the name of the file.
* 	If the file contains an invalid instruction, print the error message `L<line_number>: unknown instruction <opcode>`, followed by a new line, and exit with the status `EXIT_FAILURE`.
	*	where `<line_number>` is the line number where the instruction appears.
	*	Line numbers always start at 1.
* 	The monty program runs the bytecodes line by line and stop if either:
	*	it executed properly every line of the file
	*	it finds an error in the file
	*	an error occured
* 	If you can’t malloc anymore, print the error message `Error: malloc failed`, followed by a new line, and exit with status `EXIT_FAILURE`.
* 	You have to use `malloc` and `free` and are not allowed to use any other function from `man malloc` (realloc, calloc, …).

## Compilation & Output
Your code will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
Any output must be printed on `stdout`.
Any error message must be printed `on stderr`.


* **0. push, pall** - Implement the `push` and `pall` opcodes.
* **1. pint** - Implement the `pint` opcode.
* **2. pop** - Implement the `pop` opcode.
* **3. swap** - Implement the `swap` opcode.
* **4. add** - Implement the `add` opcode.
* **5. nop** - Implement the `nop` opcode.
* **6. sub** - Implement the `sub` opcode.
* **7. div** - Implement the `div` opcode.
* **8. mul** - Implement the `mul` opcode.
* **9. mod** - Implement the `mod` opcode.
* **10. comments** - Add comments.
* **11. pchar** - Implement the `pchar` opcode.
* **12. pstr** - Implement the `pstr` opcode.
* **13. rotl** - Implement the `rotl` opcode.
* **14. rotr** - Implement the `rotr` opcode.
* **15. stack, queue** - Implement the `stack` and `queue` opcodes.
* **16. Brainfuck** - Write a Brainf*ck script that prints `School`, followed by a new line.
* **17. Add two digits** - Add two digits given by the user. Read the two digits from stdin, add them, and print the result. The total of the two digits with be one digit-long (<10).
* **18. Multiplication** - Multiply two digits given by the user. Read the two digits from stdin, multiply them, and print the result. The total of the two digits with be one digit-long (<10).
* **19. Multiplication level up** - Multiply two digits given by the user. Read the two digits from stdin, multiply them, and print the result, followed by a new line.


## Collaborate

To collaborate, reach me through my email address wendymunyasi@gmail.com.
