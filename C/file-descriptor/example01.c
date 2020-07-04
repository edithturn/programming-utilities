#include <sys/types.h>
#include <sys/stat.h>
#include<fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define BUF_SIZE  10

int main()
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];
	fd = open("42", O_RDONLY);
	if (fd == -1)
	{
		printf("%s", "Error open fle");
		return (1);
	}
	while (	ret = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
		printf("%s", buf);
		printf("%u\n", ret);		
	}
	printf("-->> FD %u \n", fd);
	if (close(fd) == -1)
	{
		printf("close error");
		return (1);
	}
	return (0);
}