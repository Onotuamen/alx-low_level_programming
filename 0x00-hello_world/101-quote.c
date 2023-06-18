#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *Description - 'print a script but dont use printf to stderr'
 *Return: always 0
 */
	int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
