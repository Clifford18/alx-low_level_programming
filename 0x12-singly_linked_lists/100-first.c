#include <stdio.h>

/***
 *  Declare a constructor function to print a message before the main function.
 */
void executeBeforeMain(void) __attribute__ ((constructor));

/**
 * executeBeforeMain - This function is
 *automatically executed before main,
 *printing a couple of lines.
 */
void executeBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("bore my house upon my back!\n");
}
