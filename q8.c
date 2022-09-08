// Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void  binary(int);

int main()
{
    
    int n;
    printf("Enter a number which you want to find its binary: ");
    scanf("%d",&n);
   binary(n);
}
void     binary(int n)
{
    if(n>0)
    {
        binary(n/2);
        printf("%d",n%2);
    }
}