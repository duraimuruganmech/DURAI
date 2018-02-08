#include<stdio.h>
main()
{
    int x,y,i;
    printf("Enter an integer:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
    y=i*x;
    printf("%d ",y);
    }
}
