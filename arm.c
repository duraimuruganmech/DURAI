#include<stdio.h>
void main()
{
  int r,a,b,i,t,s;
  printf("Enter the two number");
  scanf("%d%d",&a,&b);
  printf("armstrong number between the two intervals is\n");
  for(i=a+1;i<b;i++)
  {
    t=i;
    s=0;
    while(t!=0)
      {
       r=t%10;
       s=s+(r*r*r);
       t=t/10;
      }
    if(i==s)
    printf("%d",i);
  }
 } 
