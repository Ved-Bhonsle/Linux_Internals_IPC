#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
int fd,len;
char r_buff[50];
char w_buff[50] = "Linux Internals part 1.";

fd = open("Linux_kernal.txt",O_CREAT | O_RDWR, 777);

len = write(fd, w_buff, 50);
printf("Return value from write: %d\n", len);

lseek(fd, 0, SEEK_SET);
read(fd, r_buff, len);

printf("Data: %s\n",r_buff);

lseek(fd, 5, SEEK_CUR);
read(fd, r_buff, len);

printf("Data: %s\n",r_buff);

close(fd);

return 0;
}
