#include <stdio.h>

void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - A constructor function that prints a message before main.
 */
void print_before_main(void)
{
    printf("Preparing to enter the realm of main function.\n");
    printf("Carrying my abode upon my dorsal expanse!\n");
}
