#include <stdio.h>
/* find out the factors of a number*/
/*check whether the given number is a perfect number or not*/
int main()
{
    int number,i,sum=0,pnum;

    printf("Enter a positive integer: ");
    scanf("%d",&number);

    printf("Factors of %d are: ", number);
    for(i=1; i <= number; ++i)
    {
        if (number%i == 0)
        {
        	sum=sum+i;
            printf("%d ",i);
        }
    }
  pnum=sum-number;
  printf("\n-----------------------------------------");
  printf("\nThe sum of factors of the %d (excluding the number itself) is: %d",number,pnum);
  if(pnum==number)
  printf("\nHence %d is a perfect number",number);
  else
  printf("\nHence %d is not a perfect number.",number);
    return 0;
}
