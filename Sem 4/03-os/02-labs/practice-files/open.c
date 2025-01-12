//open.c
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
int n,fd;
char buff[50];
fd = open("OSLAB.txt",O_RDONLY); 
printf("The file descriptor of the file is: %d",fd); 
n = read(fd,buff,10);
write(1,buff,n); 
}
