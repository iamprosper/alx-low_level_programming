#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - A function that prints a name
 * @name: A pointer to the string name
 * @f: A pointer to a function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
