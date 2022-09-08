#include<stdio.h>
void decimal_octal(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    decimal_octal(n);
}
void decimal_octal(int n)
{
    if(n>=1)
    {
            decimal_octal(n/8);
        printf("%d",n%8);
   
    }
}