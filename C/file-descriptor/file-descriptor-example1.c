#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *flow = fopen("data.txt", "rb");
	if (flow == NULL)
	{
		perror("Error opening file");
		return 1;
	}
	char character;
	while (feof(flow) == 0)
	{
		character = fgetc(flow);
		printf("%c", character);
	}

	fclose(flow);
	printf("\n\nFile was sread succefull");

	return (0);

}
