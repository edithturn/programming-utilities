#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *fp = fopen("lorem.txt", "r");

	char chunk[128];

	size_t len = sizeof(chunk);
	char *line = malloc(len);
	if (line == NULL)
	{
		perror("Unable to allocate memory for the line buffer");
		exit(1);
	}

	line[0] = '\0';

	while(fgets(chunk, sizeof(chunk), fp) != NULL){
		size_t	len_used = strlen(line);
		size_t	chunk_used = strlen(chunk);

		if (len - len_used < chunk_used)
		{
			len *= 2;
			if((line = realloc(line, len)) == NULL){
				perror("Unable to reallocate memory for the line uffer");
				free(line);
				exit(1);
			}
		}
		strncpy(line + len_used, chunk, len - len_used);
		len_used += chunk_used;

		if(line[len_used - 1] ==  '\n')
		{
			printf("line lenth: %zd\n", len_used);
			/*fputs(line, stdout);*/
			/*fputs("|*\n", stdout);*/
			line[0] = '\0';
		}
	}
			fclose(fp);
			free(line);
			printf("\n\nMax line size: %zd\n", len);
}
