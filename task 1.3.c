//Temperature Converter

#include <stdio.h>
#include <math.h>
double celsius1   = 37.0;
double ferenheit1 = 1.0;
double celsius2   = 1.0;
double ferenheit2 = 98.6;
int main()
{
	ferenheit1 = (celsius1 * 9 / 5) + 32;
	celsius2 = (ferenheit2 - 32) * 5 / 9;
	printf("%.1fCis equal to %.1fF\n",celsius1,ferenheit1);
	printf("%.1fF is equal to %.2fC",ferenheit2,celsius2);
	return 0;
}
