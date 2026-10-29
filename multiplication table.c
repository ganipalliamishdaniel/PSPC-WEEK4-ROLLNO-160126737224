//C program to print the multiplication table to the given value of n.
#include<stdio.h>
int main()

{
    int n,i;//
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}

