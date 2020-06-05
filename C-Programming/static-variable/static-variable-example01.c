#include <stdio.h>

void Func(){
	static int x = 0;
	
	x++;
	printf("%d\n", x);
}

int main(){
	Func();
	Func();
	Func();
	Func();
	Func();

	return (0);
}