#include <stdio.h>
 void main() 
 {
 int e,m;
 printf("\n Enter the range ");
 scanf("%d%d",&e,&m);
 for(int i=e+1;i<m;i++)
 {
 	if(i%2!=0)
 	printf("\nthe odd number is %d",i);
 }
}
