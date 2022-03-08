#include <stdio.h>
#include <fcntl.h>

int main()
{
int fd1;

fd1 = creat("Linux.txt",777);

printf("fd:%d\n",fd1);
return 0;
}

/*
int main()
{
int fd;

fd = open()

return 0;
}
*/
