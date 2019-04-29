#include<stdio.h>
#include<stdlib.h>
/*count the spaces in a string*/
int main()
{
	int count = 0,i;
	char string[100];
 
printf("Enter the string:\n");
gets(string);
/*from position zero of the string*/
for(i=0;string[i];i++)
/* if at any position of the string the cursor encounters spaces.Increment the counter by 1*/
if(string[i] == ' ')
count++;
printf("%d space(s) in the string",count);
	
	return 0;
}
