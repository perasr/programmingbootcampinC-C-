#include<stdio.h>
/*Interpreting Switch statment */
int main()
{

int choice;
float a,b,sum,sub,mul,div;
printf("Enter the two numbers: ");
scanf("%f %f",&a,&b);
printf("*******************************");
printf("\n1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)");
printf("\n******************************");
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		sum = a+b;
		printf("\n%.2f + %.2f =% .2f",a,b,sum);
		break;
	case 2:
		sub = a-b;
		printf("\n%.2f - %.2f =% .2f",a,b,sub);
		break;
	case 3:
		mul = a*b;
		printf("\n%.2f * %.2f =% .2f",a,b,sum);
		break;
	case 4:
		div = a/b;
		printf("\n%.2f / %.2f =% .2f",a,b,div);
        break;
    default:
    	printf("Invalid choice");
}

return 0;
}

