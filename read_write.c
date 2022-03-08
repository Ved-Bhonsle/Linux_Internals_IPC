#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
int fd,len;
int x;
char buff[100] = "Hello, This is linux internals part 1";

fd = open("linux_file.txt",O_CREAT | O_RDWR, 777);

write(fd,buff,60);

if(fd < 0)
{
	printf("File did not open\n");
}
read(fd,buff,100);
printf("Data: %s\n",buff);

close(fd);

return 0;
}

