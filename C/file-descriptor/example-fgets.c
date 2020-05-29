#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fd = fopen("lorem.txt", "r");
	if (fd == NULL)
	{
		perror("I can open file");
		return (1);
	}
	char chunk[128];
	while(fgets(chunk, sizeof(chunk), fd) != NULL)
	{
		fputs(chunk, stdout);
		fputs("|*\n", stdout);
	}
	free(fd);
}