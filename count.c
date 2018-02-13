#include<stdio.h>
int main(void)
{
	int e;
	int count=0;
	printf("Enter the value of e:");
	scanf("%d",&e);
	while(e>0)
	{
		e=e/10;
		count++;
	}
	printf("the number of digits is %d",count);
}
