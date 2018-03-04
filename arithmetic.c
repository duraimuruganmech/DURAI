#include <stdio.h>
void main() 
{
int n,a,d,tn,sum=0;	
scanf("%d %d %d",&n,&a,&d);
sum = (n * (2 * a + (n - 1)* d ))/ 2;
printf("%d\n",sum);
}
