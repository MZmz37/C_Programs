#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int	total = 0;
    int num;
	for(num = 0; num < 5; num++)
	    total += numbers[num];
	float average = total / 5;
	
		 printf("Numbers = ");
		for(num = 0; num < 5; num++)
	    printf(" %d",numbers[num]);
	printf("\nsum = %d\n",total);
	printf("Averag = %f",average);
	return 0;
}
