#include<stdio.h>
#include<conio.h>

void main()
{
  int num, i,Prime=0;
  printf("Enter a positive number");
  scanf("%d",&num);
  for(i = 2; i <=(num/2); ++i) {
      if(num%i==0) {
          Prime=1;
          break;
      }
  }
  
  if(Prime==0)
      printf("%d is a Prime Number",num);
  else
      printf("%d is NOT a Prime Number",num);
      
  getch();
}
