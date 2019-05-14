#include<stdio.h>
/* finding the quotient and remainder of a dividend without / operator*/
int main()
{

float dividend,divisor,temp; 
int count=0;
printf("Enter the dividend ");
scanf("%f",&dividend);
printf("Enter the divisor ");
scanf("%f",&divisor);
temp = dividend;
while(temp>=divisor)
{
  count++;  
  temp = temp-divisor;
}

printf("The quotient of %.2f/%.2f is %d",dividend,divisor,count);
printf("\nThe remainder is %.0f",temp);
return 0;
}

