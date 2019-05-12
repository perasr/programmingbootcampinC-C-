#include<stdio.h>
#include<math.h>
/*convert from Binary to Decimal */
int main()
{
int sum=0,num,rem,i=0;
printf("Enter the Binary number: ");
scanf("%d",&num);
while(num>0)
{
	rem = num%10;
	sum = sum+rem*pow(2,i);
	num=num/10;
	i++;
}
printf("The equivalent decimal number is: %d",sum);
return 0;
}




