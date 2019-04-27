/*calculate the quotient and remainder of a divison */
#include<stdio.h>
#include<stdlib.h>

int main()
{
  /*declare the divisior and dividend and read'em*/
	int a,b;
	printf("Enter the dividend: ");
	scanf("%d",&a);
	printf("Enter the divisor: ");
	scanf("%d",&b);
	float quotient,remainder;
	/*calcuate quotient and remainder*/
	quotient = a/b;
	remainder = a%b;
	printf("So after the division of %d/%d \nThe quotient is : %.2f \nThe remainder is : %.2f",a,b,quotient,remainder);
	
	return 0;

	
}
