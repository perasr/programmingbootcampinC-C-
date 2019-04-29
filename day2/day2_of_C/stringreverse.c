#include <stdio.h>
 
/*String reverse */
int main()
{
   char string[1000], reverse[1000];
   int begin, end, count = 0;
 
   printf("Enter the string that needs to be reversed\n");
   gets(string);
 
   // Calculating string length
   while (string[count] != '\0')
      count++;
   /*End is calculated by deducting 1 from the count as it makes convinient for reversing the string 
   because initial value starts from zero */
    end = count - 1;
  for (begin = 0; begin < count; begin++) {
      reverse[begin] = string[end];
      end--;
   }
 reverse[begin]='\0';
printf("%s\n", reverse);
 
   return 0;
}


