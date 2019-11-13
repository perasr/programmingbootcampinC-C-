/* implement factorial of a number */
#include<stdio.h>
int main()
{
	int i;
	unsigned int n;
	long int fact=1;
	//read the number
	printf("Enter the number ");
	scanf("%d",&n);
  i=1;
  while(i<=n)
  {
  	fact = fact*i;
  	i++;
  }
 printf("The factorial of the %d is %ld",n,fact);
}
