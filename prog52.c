//Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the n number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {

        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}