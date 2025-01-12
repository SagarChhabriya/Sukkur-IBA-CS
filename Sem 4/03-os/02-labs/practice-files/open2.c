//open2.c
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
int n,fd,fd1;
char buff[50];
fd=open("test.txt",O_RDONLY);
n=read(fd,buff,10);
fd1=open("towrite.txt",O_WRONLY|O_CREAT,0642);//use the pipe symbol (|) to separate O_WRONLY and O_CREAT
write(fd1,buff,n);
}
