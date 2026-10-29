//a C program to check whether given number is perfect or not
#include<stdio.h>
int main()
{
    int n,temp,i,sum;
    printf("enter n:");
    scanf("%d",&n);
    sum=0;
    i=1;
    while(i<n)
    {
        if(n%i==0)
        {
           sum=sum+i;
        }
        i++;
    }
    if(sum==n)
    {
        printf("%d is a perfect number",n);
    }
    else
    {
        printf("%d is not a perfect number",n);
    }
    
}

