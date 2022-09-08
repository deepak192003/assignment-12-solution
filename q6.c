// Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void evenreverse(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    even(n);
}
void evenreverse(int n)
{
    if(n>0)
    {
        
        printf("%d\n",2*n);
        even(n-1);
    }
}