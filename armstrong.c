#include<stdio.h>
void main()
{
    int n,a,rem,res=0;
    printf("enter three digit number");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        rem=a%10;
        res+=rem*rem*rem;
        a/=10;
    }
    if(res==n)
    printf("%d is armstrong number",n);
    else
    printf("%d is not armstrong number",n);
}
