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
	printf("Before we start the main journey, let's reflect:\n");
	printf("With my abode upon my back, I'm ready to go!\n");
}
