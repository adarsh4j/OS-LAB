#include<stdio.h>
#include<unistd.h>
int main()
{
   printf("I am Hello\n");
   printf("The PID of hello is %d\n",getpid());
   return 0;
}
