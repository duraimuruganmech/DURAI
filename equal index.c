#include<stdio.h>
void main()
{
    int num,array[150],i,j=0,t,k,a[25];
    printf("enter number and array elements");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
     for(i=0;i<num;i++)
{
    if(i==array[i])
    {
        
       a[j]=array[i];
       j=j+1;
    }
}
k=j;
if(j>0)
{
    for(i=0;i<k-1;i++)
{
    for(j=i+1;j<k;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    }}
    else
    {
        printf("'-1'");
    }
     for(i=0;i<k;i++)
     {
         printf("%d",a[i]);
     }
}
