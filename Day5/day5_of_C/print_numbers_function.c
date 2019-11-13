/* Recursive function for printing numbers in increasing order*/
#include<stdio.h>
int main()
{
	int x;
	int choice;
	printf("Enter the number: ");
	scanf("%d",&x);
	funcprint(x);
return 0;
}

void funcprint(int n)
    {
	if(n>0)
	   {
	   funcprint(n-1);
	   printf("%d \n",n);
      }
  }
	
	



	

