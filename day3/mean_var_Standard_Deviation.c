#include<stdio.h>
#include<math.h>
/* find mean and variance of n numbers */
void main()
{

int n,i;
float X[100],mean,temp=0,var,SD,sum=0;
printf("Enter the N value:\n ");
scanf("%d",&n);
printf("Enter %d numbers to calculate Mean Variance and Standard Deviation\n",n);
/*Store the numbers in an array*/

for (i=0;i<n;i++)
{
	scanf("%f",&X[i]);

}


for(i=0;i<n;i++)
{
sum = sum+X[i];
temp=temp+ pow(X[i]-mean,2);
}
/*calculate Mean*/
mean = sum/n;
/*calculating variance and Standard Deviation */
var = temp/n;
SD = sqrt(var);
printf("\nMean: %.2f\nVariance: %.2f\nStandard Deviation: %.2f\n",mean,var,SD);
return 0;
}


