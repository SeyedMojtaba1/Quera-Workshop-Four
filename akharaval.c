#include <stdio.h>

int number()
{
	int num;
	scanf("%d",&num);
	
	if(num==0)
		return 0;
	number();	
	printf("%d\n",num);
}

int main()
{
	number();
}
