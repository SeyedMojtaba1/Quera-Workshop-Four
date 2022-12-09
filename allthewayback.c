#include <stdio.h>

long long int H(long long int num)
{
	if(num==0)
		return 5;
	if(num==1)
		return -3;
	if(num==2)
		return 1;

			
		return 3*H(num-1)-2*H(num-2)+H(num-3);
}

int main()
{
	long long int sum,num;
	scanf("%lld",&num);
	
	sum=H(num);
	printf("%lld",sum);
}
