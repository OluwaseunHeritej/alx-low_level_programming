#include "main.h"

/**
 * _strlen - main entry
 * @s: A pointer
 * Return: 0
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
