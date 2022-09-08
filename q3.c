//  Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void printodd(int);
int main()
{
    int num;
    int i=1;
    printf("Enter a number: ");
    scanf("%d",&num);

    printodd(num);
}

void printodd(int n)
{
    if(n>0)
    {
        printodd(n-1);
        printf("%d\n",2*n-1);
    }

}











