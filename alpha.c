#include<stdio.h>
void main()
{
char f;
scanf("%c",&f);
if((f>='a'&&f<='z')||(f>='A'&&f<='Z'))
printf("alphabet");
else
printf("not an alphabet");
}
