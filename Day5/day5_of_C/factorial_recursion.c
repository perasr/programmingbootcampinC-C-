/* Factorial using Recursion*/
#include<stdio.h>

long int fact(int n)
{
	if(n == 0)
	return 1;
    
	else 
    return fact(n-1)*n;
    
	
}


int main()
{
long int num;
printf("Enter the number to find factorial: ");
scanf("%ld",&num);
fact(num);
}
