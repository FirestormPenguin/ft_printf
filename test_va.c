#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>
#include <strings.h>

int test(const char *str, ...)
{
	va_list	args;
	int		i = 8;

	va_start(args, str);
	printf("%s\n", str);
	while (i > 0)
	{
		printf("%i\n", va_arg(args, int));
		i--;
	}
	va_end(args);
	return (0);
}

int main()
{
	test("numeri:", 1, 2, 3, 4, 5, 6, 'a');
	return (0);
}
