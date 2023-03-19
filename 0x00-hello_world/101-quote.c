#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	me = "and that piece of art is usefull\" - Dora Korpar, 2014-10-19\n";
	const char *me;

	write(STDERR_FILENO, me, 59);
	return (1);
}
