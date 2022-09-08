// Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void printNreverseorder(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

printNreverseorder(num);
return 0;
}

void printNreverseorder(int n)
{
    if(n>=1)
    {
        printf("%d",n);
        printNreverseorder(n-1);
    }
}