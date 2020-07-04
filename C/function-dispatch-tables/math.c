#include <stdio.h>
#include "math.h"

int main()
{
	int num01, num02, choise, result;
	num01 = 2;
	num02 = 3;
	choise = 1;

	math_function	*my_array[4] = {
		add,
		sub,
		multi,
		divide
	};

	result = my_array[choise](num01, num02);
	printf("Result is %d\n", result);
	return (0);
}

int add(int num01, int num02)
{
	return num01 + num01;
}
int sub(int num01, int num02)
{
	return num01 - num02;
}
int multi(int num01, int num02)
{
	return num01 * num02;
}
int divide(int num01, int num02)
{
	return num01/num02;
}