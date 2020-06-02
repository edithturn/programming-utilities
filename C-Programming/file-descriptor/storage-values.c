#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE * flow = fopen("data.txt", "rb");
	if (flow == NULL){
		perror("Error opening file");
		return 1;
	}
	int num;
	char str[10];

	while(feof(flow) == 0){
		fscanf(flow, "%d %s", &num, str);
		//Changing the value of the stored variable
		num *= 10;
		printf("%d %s\n" , num, str);
	}
	fclose(flow);
	printf("\n\nThe file was readed succeful");

	return (0);
}