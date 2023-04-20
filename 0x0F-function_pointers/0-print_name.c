#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: first para
 * @f: our function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
