#include<stdio.h>
/*adding and deleting elements at specific position of an array */
int main()
{

int A[100],n,i,pos;
printf("Enter the size of an array (no.of elements): ");
scanf("%d",&n);
printf("Enter the %d elements of the array below:\n",n);
for(i=0;i<n;i++)
{
	printf("A[%d]: ",i);
	scanf("%d",&A[i]);

}
printf("Enter the position at which you wanna add an element:\n");
scanf("%d",&pos);
if(pos>n)
{
	printf("Adding an element at that position is not possible");
}
return 0;
}
