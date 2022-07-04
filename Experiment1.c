#include <stdio.h>
#include <unistd.h>
int main()
{
	int n;
	int sumOdd = 0, sumEven = 0, m, i;
        printf("Enter the number of numbers: ");
	scanf("%d",&n);
    	m = fork();
	
	

	if (m> 0) 
	{
          for (i = 0; i < n; i++) 
	  {
            if (i % 2 == 0)
	    {
              sumEven = sumEven + i;
	    }
	  }
	  printf("\nParent process.\n");
	  printf("Sum of even numbers is: %d\n",sumEven);
	}

	else 
	{
          for (i = 0; i < n; i++) 
	  {
            if (i % 2 != 0)
	    {
              sumOdd = sumOdd + i;
	    }
	  }
          printf("\nChild process \n");
          printf("Sum of odd numbers is: %d\n",sumOdd);
	  printf("Process id is %d",getpid());
	}return 0;
}
