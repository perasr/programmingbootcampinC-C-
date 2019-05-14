#include<stdio.h>
/* calculating the power of a variable without using power function*/
int main()
{
  int i;
  double num,n,value=1;
  printf("Enter the number: ");
  scanf("%lf",&num);
  printf("Enter the power/exponent: ");
  scanf("%lf",&n);
  for(i=0;i<n;i++)
  {
   value = value*num;
  }
  printf("\n%.0lf power of %.0lf = %.0lf",num,n,value);
	return 0;
}
