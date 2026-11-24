//Statements and Expressions
//Circle Area and Circumference

#include <stdio.h>
#include <math.h>
#define PI 3.14159
float radius = 5.0; 
float area = 1;
float circumference = 1;
int main()
{
	area = PI * radius * radius; 
	circumference = 2 * PI * radius;
    printf("Radius = %.1f\n",radius); 
	printf("Area = %.2f\n",area);
	printf("Circumference = %.2f\n",circumference);
    return 0 ;
}


