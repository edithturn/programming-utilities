#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
	char name[MAX_NAME];
	int age;
}	person;

person * hash_table[TABLE_SIZE];

unsigned int hash(char *name){
	int lenght = strnlen(name, MAX_NAME);
	unsigned int hash_value = 0;
	for (int i=0; i < lenght; i++){
		hash_value  += (name[i] % TABLE_SIZE);
	}
	return hash_value;
}

void print_table(){
	for (int i=0; i < TABLE_SIZE; i++){
		if (hash_table[i] == NULL){
			printf("\t%i\t---");
		} else {
			printf("\t%i\t%s\n", hash_table[i]->name);
		}
	}
}
void init_hash_table(){
	for (int i=0; i < TABLE_SIZE; i++){
		hash_table[i] = NULL;
	}
}

int main(){
	init_hash_table();
	printf("Edith => %u\n", hash("Edi"));
	printf("Pavel => %u\n", hash("Pavel"));
	printf("Marcia => %u\n", hash("Marcia"));
	printf("Felix => %u\n", hash("Felix"));
	printf("Jean => %u\n", hash("Jean"));
	printf("Tomas => %u\n", hash("Tomas"));
	printf("Jane => %u\n", hash("Jane"));
	printf("Terence => %u\n", hash("Terence"));
	printf("Elián => %u\n", hash("Elián"));
}