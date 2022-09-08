// Write a recursive function to print squares of first N natural numbers

#include<stdio.h>
void square(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
 square(num);


}
void square(int n)
{
    if(n>=1)
    {
        square(n-1);
        printf("%d\n",n*n);
    }
}