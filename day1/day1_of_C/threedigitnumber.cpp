/* check whether a given number is a three-digit number or not*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	/*declare variable and read it */
	int number;
	printf("Enter the number ");
	scanf("%d",&number);

 /*logic for finding out a 3 digit number*/
    if(number/1000==0 && number/100!= 0)
      printf("%d is a three digit number", number);
    else
      printf("%d is not a three digit number",number);
      
return 0;
}
