#ifndef PRINTF
#define PRINTF
typedef struct func
{
	char c;
	void (*output_sth)(va_list);
} choose_func;
int _putchar(char c);
#endif
