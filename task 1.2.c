//Quadratic root calculator

#include <stdio.h>
#include <math.h>
double a = 1; 
double b = 5;
double c = 6;
double discriminant = 1;
double root1 = 1;
double root2 = 1;
double main()
{
    discriminant = (b * b) - (4 * a * c);
	root1 = (-b + sqrt(discriminant)) / (2 * a); 
	root2 = (-b - sqrt(discriminant)) / (2 * a);
	printf("Root 1 = %.1f\n",root1); 
	printf("Root 2 = %.1f\n",root2);
    return 0;
}

