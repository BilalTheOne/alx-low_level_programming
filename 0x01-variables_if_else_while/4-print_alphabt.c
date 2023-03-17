#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, except for the letters 'q' and 'e'.
 *              Uses putchar to print each letter and a newline at the end.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}

putchar('\n');

return (0);
}

