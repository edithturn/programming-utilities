#include <stdarg.h>
#include <stdio.h>

int sum(int, ...);

int main(void)
{
	printf("Sum of 10, 20 and 30 = %d\n", sum(3, 10, 20, 30));
	printf("Sum of 3, 3, 2, 2 and 1 = %d\n", sum(3, 3, 3, 2, 2,1));
	return 0;
}

int sum(int num_args, ...)
{
	int val = 0;
	va_list ap;
	int i;

	va_start(ap, num_args);
	for (i = 0; i < num_args; i++)
	{
		val = val + va_arg(ap, int);
	}
	va_end(ap);
	return val;
}