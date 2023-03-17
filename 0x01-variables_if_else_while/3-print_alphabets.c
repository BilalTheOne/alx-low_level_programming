#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, followed by uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

/* print lowercase alphabet */
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

/* print uppercase alphabet */
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}

/* print newline */
putchar('\n');

return 0;
}
