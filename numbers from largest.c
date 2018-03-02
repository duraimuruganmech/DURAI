#include <stdio.h>
void main() 
{
	int b[10],i,n,j,temp;
	printf("Enter no of element");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&b[i]);
	for(i=1;i<=n;i++)
  for(j=i+1;j<=n;j++)
	{
	if(b[i]>b[j])
	{
	temp=b[i];
	b[i]=b[j];
	b[j]=temp;
	}
	}
	for(i=n;i>=1;i--)
	{
	printf("%d",b[i]);
	}
}
