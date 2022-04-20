#include <unistd.h>

/**
 * _putchar - main entry
 * @c: A character
 * Return: 1 on success
 * On error, return -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
