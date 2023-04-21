#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on the format provided
 * @format: format string specifying the types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	float f;
	char *s;

	va_start(args, format);

	while (format && format[i] && i < 40)
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}

		if (format[i + 1] && i < 39)
			printf(", ");

		i++;
	}

	va_end(args);
	printf("\n");
}
