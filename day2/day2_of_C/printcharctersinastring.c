#include <stdio.h>
/* printing individual characters in a string and count the total characters  */ 
int main()
{
   char string[100];
   int i = 0,count=0;
 printf("Enter the string: ");
   gets(string);
 /*until the end of the string */
   while (string[i] != '\0') 
   {
  /*print each character of the string */
  printf("%c,",string[i]);
i++;
}
/*counting blanks in a string */
 if(string[i]== ' ')
   i++;
   count++;
 /*Total number of characters in a string excluding the blanks/spaces */
 printf("\nTotal number of characters are: %d",i-count);
   return 0;
}
