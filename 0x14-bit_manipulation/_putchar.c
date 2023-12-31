#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: Character to print
 *
 * Return: success = 1.
 *error = -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
