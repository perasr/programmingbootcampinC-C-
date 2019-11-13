#include<stdio.h>
//finding highest row sum and column sum of a given n x m matrix
int main()
{
/*A is 2D array which represents the matrix and rowsum and colsum are 1d array which holds rowsum and column sum*/
/*rbig cbig represents the max sum of a row and column respectively */
int A[100][100],rowSum[100],colSum[100],rbig,cbig;
/*nrows and ncols represents number of rows and columns which we take as input from the user*/
int nrows,ncols,i,j;
/* Reading the n x m matrix*/
printf("Enter the number of rows for your matrix: ");
scanf("%d",&nrows);
printf("Enter the number of columns for your matrix: ");
scanf("%d",&ncols);
printf("Enter the elements for your chosen %d x %d matrix\n",nrows,ncols);
for(i=0;i<nrows;i++)
{
 for(j=0;j<ncols;j++)
 {
 	printf("A[%d][%d]: ",i,j);
	scanf("%d",&A[i][j]);	
  }
}
//printing the matrix
printf("\nThis is your matrix\n");
for(i=0;i<nrows;i++)
for(j=0;j<ncols;j++)
{
 printf(" %d ",A[i][j]);
    if(j == ncols-1) 
{
	printf("\n");
}
}
//Finding Sum of each row
for(i=0;i<nrows;i++)
{   
 rowSum[i]=0;
for(j=0;j<ncols;j++)
 {
   rowSum[i] = rowSum[i]+A[i][j];
  }
}
//finding Sum of each column
for(j=0;j<ncols;j++)
{
colSum[j]=0;
for(i=0;i<nrows;i++)
  {  
	colSum[j]= colSum[j]+A[i][j];
  }
} 
//finding max sum of the row
rbig = rowSum[0];
for(i=1;i<nrows;i++)
{
 if(rowSum[i]> rbig)
 {
   rbig = rowSum[i];
 }
}
cbig = colSum[0];
for(i=1;i<ncols;i++)
{
 if(colSum[i]> cbig)
 {
   cbig = colSum[i];
 }
}

printf("\nThe max row sum is %d \n",rbig);
printf("The max col sum is %d",cbig);
return 0;
}

