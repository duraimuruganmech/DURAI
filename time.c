#include <stdio.h>
void main() 
{
int time,min,hour;
scanf("%d",&time);
min=time%60;
if(min==0)
{
hour=time/60;
}
else
{
hour=(time-min)/60;
}
printf("hour is %d minute is %d\n",hour,min);
}
