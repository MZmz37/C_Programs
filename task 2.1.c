//Conditional Statments
//Even or Odd Checker

#include <stdio.h>

int main()
{

    int n = 0;
	printf("Enter a number :",n);
    scanf("%d", &n);
    
	if (n % 2 == 0)
	{
		printf("%d is an even number.",n);
	}
    
    else
   {
		printf("%d is an odd number.",n);
   }
    return 0;
}

