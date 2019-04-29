
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

float a,b,c;
/* read the three sides */
printf("Enter the sides of the traingle:  ");
scanf("%f%f%f",&a,&b,&c);
/*check the condition */
if( a == 0 || b==0 || c==0)
printf("The given sides %.2f %.2f %.2f doesn't form a triangle",a,b,c);
else if(a+b>c || b+c>a || a+c>b) 
    {  
     if(pow(c,2)==(pow(a,2)+pow(b,2)))
      printf("The traingle with sides %.2f,%.2f,%.2f is a right angled triangle",a,b,c);
  else
      printf("The triangle is not a right angled triangle");
    }

return 0;
}
