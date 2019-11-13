#include<stdio.h>
/*implementation of Bogo Sort*/
/* bogo sort tries to sort elements based on trial and error method that means it keeps on doing permutations and combinations
until it gets the sorted order.*/
int main()
{

int a[100],n,i,b,c;
printf("How many elements you want to have in your array?:  ");
scanf("%d",&n);
printf("Enter the values:\n");
for(i=0;i<n;i++)
{
printf("a[%d]: ",i);
scanf("%d",&a[i]);
}
/*check whether the array is sorted or not*/
int is_sorted(int *b,int c)
{
	while(--c>=1)
	{
	if (b[c]<b[c-1])
	{
		return 0;
	}
   return 1;
}
void shuffle(int *b, int c)
{
    int i, t, temp;
    for (i = 0;i < c;i++)
    {
        t = b[i];
        temp = rand() % n;    /* Shuffles the given array using Random function */
        b[i] = b[temp];
        b[temp] = t;
    }
}
void bogosort(int *b, int c)
{
    while (!is_sorted(b, c))
    {
        shuffle(a, n);
    }
}
bogosort(a, n);
printf("the randomly sorted elements are:\n");
for(i=0;i<n;i++)
printf("\n %d",a[i]);
return 0;
}
}



