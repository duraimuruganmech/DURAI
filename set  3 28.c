#include<stdio.h>
void main()
{
    int arr[30],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",arr[i],i);
    }
    
}
