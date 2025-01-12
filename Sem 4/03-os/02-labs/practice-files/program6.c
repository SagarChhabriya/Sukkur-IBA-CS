//read.c
#include<unistd.h>
int main()
{

	char buff[20];
	read(0,buff,10);//read 10 bytes from standard input 
	device(keyboard), store in buffer (buff)
	write(1,buff,10);//print 10 bytes from the buffer on the screen

}
