#include "stdio.h"

void prnitF(void) __attribute__ ((constructor));

/**
 * printF - print before the main function
 */
void printF(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
