#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE * flow = fopen("data.txt", "rb");
	if(flow == NULL){
		perror("Error opening the file");
		return 1;
	}

fseek(flow, 0, SEEK_END);
int num_elemets = ftell(flow);
rewind(flow);

char * str = (char *) calloc(sizeof(char), num_elemets);
if(str == NULL){
	perror("Error reserving memory");
	return 2;
}

int num_read_elements = fread(str, sizeof(char), num_elemets, flow);
if(num_elemets != num_elemets){
	perror("Error reading the file");
	return 3;
}

free(str);
fclose(flow);
printf("\n\nFile was ready succeful");

return (0);
}