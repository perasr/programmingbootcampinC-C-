#include <stdio.h>  
#include <string.h>  
/*String conversion from lowercase to uppercase  and uppercase to lowercase*/   
int main()  
{  
    char string[100];  
    printf("enter the string\n");
    gets(string);
    int i =0;
/* until the end of the string */
   
	 while(string[i]!='\0')
    { 
    /*inserting the null values for the blanks in a string */
	if(string[i]==' ')
    string[i] = '\0';
     /* if it's lowercase(Checking ASCII value) and convert it to upper */
	 if((int)string[i]>=97)
	 {
	 printf("%c",string[i]-32);
     i++;
        }
     else 
     {
     /* if it's uppercase(Checking ASCII value) convert it to lower */
     printf("%c",string[i]+32);
     i++;
       }
    
}  
          
    return 0;  
}  
