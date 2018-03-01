
#include <stdio.h>
void main()
{
	int e,m,flag;
	scanf("%d%d",&e,&m);
	printf("\n The prime numbers between %d and %d are:",e,m);
	for(int i=e+1;i<m;i++)
	{
		flag=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
	
	if(flag==0)
	{
		printf("%d\n",i);
	}
	}
}
