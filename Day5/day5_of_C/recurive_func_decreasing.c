/* Recursive function for printing numbers in decreasing order*/
#include<stdio.h>
int main()
{
	int x;
	printf("Enter the number ");
	scanf("%d",&x);
	func(x);
return 0;
}
void func(int n)
{
	if(n > 0)
	{
	printf("%d \n",n);
	func(n-1);
}

}

