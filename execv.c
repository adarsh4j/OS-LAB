#include<stdio.h>
#include<unistd.h>
int main()
{
   printf("I am hello\n");
   printf("PID of hello is %d\n",getpid());
   char *args[]={"./hello",NULL};
   execv(args[0],args);
   return 0;
}
