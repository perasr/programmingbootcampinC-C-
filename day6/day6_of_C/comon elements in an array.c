/* finding common elements in an array */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],b[100],n,i,m,j;
	printf("Enter the length of an Array A: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("a[%d]:",i);
	scanf("%d",&a[100]);
    }
    printf("Enter the length of an Array B: ");
    scanf("%d",&m);
	for(i=0;i<m;i++)
	{
	printf("b[%d]:",i);
	scanf("%d",&b[100]);
    }
    printf(" Array A : ");
    for(i=0;i<n;i++)
   {
    printf(" %d ",a[i]);
    } 
    printf("\n");
	printf(" Array B : ");
	for(j=0;j<m;j++)
	{
	printf(" %d ",b[j]);
    }
	
	return 0;
}
