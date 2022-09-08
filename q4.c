// Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void reverseodd(int );
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    reverseodd(n);
}
void reverseodd(int n)
{
    if(n>0)
    {
        printf("%d\n",2*n-1);
        reverseodd(n-1);
    }
}