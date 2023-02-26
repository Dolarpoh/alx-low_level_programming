#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const ssize_t len = 59;
	const ssize_t nwritten = write(2, msg, len);

	return nwritten == len ? 1 : -1;
}
