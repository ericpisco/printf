#include <unistd.h>

/**
 * _putchar - function to return character to stdout
 * @c -the character constant
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
