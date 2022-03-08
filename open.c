#include <stdio.h>
#include <fcntl.h>

int main()
{
int fd1;

fd1 = open("Linux.txt",O_RDWR,777);

printf("fd = %d\n",fd1);

close(fd1);

return 0;
}
