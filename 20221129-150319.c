#include <stdio.h>

long long int myPow(long long int Base,long long int exp)
{
	if(exp==0)
		return 1;
	else
		return Base*myPow(Base,exp-1);	
}

int main()
{
	long long int numz=0,num,nump,loop,counter=0,leov;
	scanf("%lld",&num);
	nump=num;
	if(num==0)
		printf("Yes");
	else
	{	
			nump=num;
			for(loop=0;nump!=0;loop++)
				{
					leov=nump%10;
					nump/=10;
					numz+=myPow(leov,3);
				}	
			
			if(numz==num)
				printf("Yes");
			else 
				printf("No");	
	}
}


