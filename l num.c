#include<stdio.h>
void main()
{
int p,k,d;
scanf("%d%d%d",&p,&k,&d);
if(p>k && p>d)
printf("p is the greater number",p);
else if(k>d)
printf("k is the greater number",k);
else
printf("d is the greater number",d);
}
