#include "main.h"

/**
 * _strcpy - main entry
 * @dest: A pointer
 * @src: A pointer
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{

int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

}
