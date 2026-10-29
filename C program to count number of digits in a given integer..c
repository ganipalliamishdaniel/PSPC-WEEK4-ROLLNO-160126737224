//C program to count number of digits in a given integer.

#include<stdio.h>
int main()
{
    int n,count;
    printf("enter n:");
    scanf("%d",&n);
    count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
   
    printf("number of digits:%d",count);
}

