#include <stdio.h>

long double myPow(long double Base,unsigned int exp)
{
	if(exp==0)
		return 1;
	else
		return Base*myPow(Base,exp-1);	
}

int main()
{
	long double answer,Base;
	unsigned int exp;
	
	scanf("%llf\n",&Base);
	scanf("%u",&exp);
	
	answer=myPow(Base,exp);
	printf("%0.3llf",answer);
}
