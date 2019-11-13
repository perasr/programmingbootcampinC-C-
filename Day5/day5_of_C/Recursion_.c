#include<stdio.h>
void main()
{
	int a;
	printf("Enter the n value for sum of first n numbers: ");
	scanf("%d",&a);
	printf(" Sum of first %d numbers are: %d ",a,fun(a));
	
}

int fun(int n)
{
	if(n>0)
	return fun(n-1)+n;
}
