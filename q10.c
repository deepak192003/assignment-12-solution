#include<stdio.h>
void reverse(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    reverse(num);
}
void reverse(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        reverse(n/10);
    }
}