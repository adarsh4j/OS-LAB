#include<unistd.h>
int main(void)
{
char*binaryPath ="/bin/ls";
char*arg2 = "/home";
execl(binaryPath,arg2,NULL);

return 0;
}
