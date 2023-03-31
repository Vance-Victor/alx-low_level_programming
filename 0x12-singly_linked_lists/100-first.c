#include <stdio.h>

void before(void) __attribute__((constructor));

/**
 * before - Entry Point
 * Description: print before main
 */

void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
