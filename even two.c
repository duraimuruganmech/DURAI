#include<stdio.h>
void main()
{
 int e,k,i;
 printf("\n Enter the range:");
 scanf("%d%d",&e,&k);
 for(i=e+1;i<k;i++)
 {
 	if(i%2==0)
 	printf("the even number is %d\n",i);
 }
}
