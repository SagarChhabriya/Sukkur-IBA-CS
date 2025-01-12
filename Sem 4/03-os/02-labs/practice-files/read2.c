#include<unistd.h>
int main()
{
char buff[20];
read(0,buff,10);
write(1,buff,5);


}
