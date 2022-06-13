#include<stdlib.h>
#include<stdio.h>

#include <fcntl.h>
int main()
{
int sz;

int fd = open("foo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd < 0)
{
	perror("r1");
	exit(1);
}

sz = fwrite(fd, "hello\n", strlen("hello\n"));

printf("called write(% d, \"hello\\n\", %d)."
	" It returned %d\n", fd, strlen("hello\n"), sz);

close(fd);
return 0;
}

