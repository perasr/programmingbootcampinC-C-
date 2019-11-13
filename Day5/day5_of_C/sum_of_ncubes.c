/*Sum of cubes in recursion*/

#include<stdio.h>

int sumofcubes(int n)
{
	int d;
	if(n==1)
	return(1);
	else 
	return (n*n*n)+sumofcubes(n-1);	
}

int main()
{
	int n;
	printf("Enter the n value to calculate sum of n cubes: ");
	scanf("%d",&n);
	printf("The Sum of first %d cubes are: %d",n, sumofcubes(n));
}
