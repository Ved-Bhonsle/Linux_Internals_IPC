#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
int fd,len;
int x;
char write_buff[60] = "Linux kernel new program ?, wow ?";

fd = open("linux_file.txt",O_CREAT | O_RDWR, 777);

write(fd, write_buff, 60);

close(fd);

return 0;
}

