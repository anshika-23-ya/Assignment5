//6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the n even number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i);
    }
    return 0;
}