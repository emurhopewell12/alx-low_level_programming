#include <stdio.h>
#imclude "main.h"
/**
 *  _puts - prints a string
 *  @str: string
 *  Return: nothing
 */
void _puts(char *str)
{
	while (*str)
{
	putchar(*str++);
}
putchar(10);
}
