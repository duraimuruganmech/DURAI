#include<stdio.h>
void main()
{
    int n=5,k=2,i,z=0;
    int a[5];
    for(i=1;i<=5;i++)
     scanf("%d",&a[i]);
    for(i=1;i<=k;i++)
        z=a[i]+z;
    printf("%d",z);
}
