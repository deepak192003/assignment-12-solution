// Write a recursive function to print first N natural numbers
#include<stdio.h>

void printN(int);      //function declaration
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printN(num);
return 0;
}
void printN(int n)
{
    if(n>=1)
    {
          printN(n-1);
    printf("%d\n",n);
    }
  
}