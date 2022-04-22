#include <unstd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a character
 * @ap: argument pointer
 */
void print_char(va_list ap)
{
	char c = va_arg(ap, int);
	_putchar(c);
}

/**
 * print_string - print a string pointed to by ap
 * @ap: argument pointer
 */
void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;

	if (str == NULL)
		return;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
