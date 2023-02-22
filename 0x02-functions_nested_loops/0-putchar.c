#include <unistd.h>
/**
 * main - Entry point
 * print "_putchar" with write
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* code */
	write(1, "_putchar\n", 10);
	return (0);
}
