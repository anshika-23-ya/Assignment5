//3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n,i ;
    printf("Enter the value of  n odd natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
    }
    return 0;
}