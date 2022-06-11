#ifndef PRINTF_
#define PRINTF_
#include <stdarg.h>

int print_percent(va_list ap __attribute__((unused)));

typedef struct func
{
	char c;
	void (*output_sth)(va_list);
} choose_func;
int _putchar(char c);

#endif
