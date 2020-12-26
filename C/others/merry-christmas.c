#include <stdio.h>

int main()
{
	char *name = "PUCLLA";
	int i, j,s, t;
	int flag;
	
	j =  strlen(name) -1;
	flag = 0;
	while(j >=0)
	{
		s = j;
		if (flag == 0)
		{
			s++;
			while(s--)
				printf("%s", " ");
			printf("%s\n", "*");
			flag = 1;
		}
		i = j;
		while(i--)
			printf("%s", " ");
		printf("%s%s%s\n", &name[j--], "|" ,&name[j]);
	}
	t = strlen(name)  - 1;
	while(t--)
		printf("%s", " ");
		printf("%s\n\n" , "| |");
	printf("%s\n\n" , " ^-^ Happy New Year! ^-^ ");
	return 0;
}
