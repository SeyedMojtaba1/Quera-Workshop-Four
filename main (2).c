#include <stdio.h>
#include <math.h>

long int factorial(long int num)
{
	if(num==1)
		return num;
	return num*	factorial(num-1);	
}

int main()
{
	long int num;
	scanf("%ld",&num);
	
	long int fact;
	fact=factorial(num);
	
	printf("%ld",fact);
}