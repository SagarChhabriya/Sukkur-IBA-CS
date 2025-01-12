#include<unistd.h>
int main()
{
//write(1,"hello\n",3);//the bytes to be printed (third parameter) are less than the data specified in 2nd parameter
write(1,"hello\n",6);
}
