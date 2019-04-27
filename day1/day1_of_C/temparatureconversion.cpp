#include<stdio.h>
#include<stdlib.h>
/* main method */

int main(){
/* Read the value of Farenhit */	
	float celsius,farenhit;
	printf("Enter the temparture in Farenhit:");
	scanf("%f",&farenhit);
/*Temparature conversion*/
celsius = ((farenhit-32)/1.8);
    printf("Temparature value is: %.0f degree celsius",celsius);
return 0;    
	
}
