#include<stdio.h>
void main()
{
    int rem,rev=0,a;
    printf("enter number");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    if(a=rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
