#include<stdio.h>
#include<stdlib.h>
/* main method */
int main()
{
/* declare variables */
 int a,b;
 printf("Enter the  a and b values that need to be swapped: ");
 scanf("%d%d",&a,&b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("The swapped values are: a=%d b =%d",a,b);
  
  return 0;
}
   
