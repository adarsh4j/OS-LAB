#include <stdio.h> 
#include<stdlib.h>
#include <unistd.h> 
#include <sys/types.h>
void myFork(int m) 
{ 
    
    if (fork() == 0) 
       {
         printf("The even number is:\n");
         for(int i=0;i<=m;i++)
         {
            if(i%2==0)
               printf("%d\n",i);
         }
        
       }
    else
      
        {
            printf("The odd number is:\n");
            for(int i=0;i<=m;i++)
         {
            if(i%2!=0)
               printf("%d\n",i);
         }
        
       }
   
} 
int main() 
{ 
    int n;
    printf("Enter the range\n");
    scanf("%d",&n);
    myFork(n); 
    return 0; 
}
