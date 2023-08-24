#include <stdio.h>

// Declare a function called "beforeMain" as a constructor.
void beforeMain(void) __attribute__ ((constructor));

/**
 * beforeMain - A function executed before the main function.
 *
 * This function prints a message to the console before the main function is executed.
 */
void beforeMain(void)
{
    printf("Before the main function: You carry your home on your back!\n");
}
