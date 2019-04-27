/* finding the type of triange */
#include<stdio.h>
#include<stdlib.h>
 int main() {
/*declare variables for 3 sides */
   int a,b,c;
   printf("Enter the three sides of a triangle: ");
   scanf("%d%d%d",&a,&b,&c);
/*display the type of triangle*/

if(a+b>c || b+c>a || c+b>a)
{
 if (a==0 || b==0 | c==0)
 printf("The sides(%d,%d,%d) doesnot form a triangle",a,b,c);
  else if(a == b & b==c)
  printf("the sides (%d, %d ,%d) forms an equilateral triangle",a,b,c);
  else if((a == b || b==c || c == a) && (a!=0 || b!=0 || c!=0))
  printf("the sides (%d, %d, %d) forms an Isoceles trainge",a,b,c);
  else
  printf("the sides (%d,%d,%d) forms an scalane triangle",a,b,c);
}
else 
printf("The sides(%d,%d,%d) doesnot form a traingle at all",a,b,c);
  return 0;
 }
 
 
