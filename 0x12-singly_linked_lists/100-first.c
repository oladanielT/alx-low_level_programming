#include <stdio.h>
void first(void) __attribute__((constructor));
/**
 * first - print a sentence b4 the main function invoked
 * Return: void
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
