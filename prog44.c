//Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the n natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}