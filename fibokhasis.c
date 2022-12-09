#include <stdio.h>

long int fibo(long int num)
{
	return (num==1||num==2) ? 1 :  fibo(num-1)+fibo(num-2);
}

int main()
{
	long int answer,num;
	scanf("%ld",&num);
	
	answer=fibo(num);
	printf("%ld",answer);
}
