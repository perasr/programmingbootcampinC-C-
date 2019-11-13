/*Sum of first N natural numbers using Recursion*/
#include<stdio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return sum(n-1)+n;
	
	
}

int main()
{
	 int a;
	 
	printf("Enter the N value for the natural numbers: ");
	scanf("%d",&a);
	sum(a);
}
