#include<stdio.h>

/* Given two matrices find the difference between sum of upper and lower traingular matrices*/
int main()
{
int nrows,ncols,A[100][100],i,j,Upper_Sum=0,Lower_Sum=0;
printf("Enter the number of rows: ");
scanf("%d",&nrows);
printf("Enter the number of columns: ");
scanf("%d",&ncols);
if(nrows!=ncols)
printf("You have entered non-square matrix! \n Try entering  a square matrix next time");

else
{

printf("Enter the %d x %d matrix\n",nrows,ncols);
for(i=0;i<nrows;i++)
{
 for(j=0;j<ncols;j++)
{
    printf("A[%d][%d]: ",i,j);
	scanf("%d",&A[i][j]);
}
}
printf("\nThis is your matrix\n");
for(i=0;i<nrows;i++)
for(j=0;j<ncols;j++)
{
printf(" %d ",A[i][j]);
if( j == ncols-1)
{
printf("\n");
}
}
for(i=0;i<=nrows;i++)
for(j=i+1;j<=ncols;j++)
if(i<=j)
{
	Upper_Sum = Upper_Sum+A[i][j];
}

for(j=0;j<=ncols;j++)
for(i=j+1;i<=nrows;i++)
if(i>=j)
{
	Lower_Sum = Lower_Sum+A[i][j];
}
printf("Sum of Upper traingular Matrix is: %d\n",Upper_Sum);
printf("Sum of Lower triangular Matrix is: %d\n",Lower_Sum);
printf("The difference of Upper and Lower triangular Matrix is %d",(Upper_Sum-Lower_Sum));
}
return 0;
}
