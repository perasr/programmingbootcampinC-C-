/*check whether the last digit of a number ends with 5 or not*/
#include<stdio.h>
#include<math.h>
int main(){
	int num;
	printf("Enter the number :  ");
	scanf("%d",&num);
	if(num%10==5)
	printf("the last digit of %d is 5 ",num);
	else
	printf("The last digit of %d is not 5",num);
	
	return 0;
}
