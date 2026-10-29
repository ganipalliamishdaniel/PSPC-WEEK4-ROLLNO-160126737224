//c-program to check whether given number is prime or not
#include<stdio.h>
int main()
{
    int i,n,count;//variable declaration
    printf("enter n:");
    scanf("%d",&n);
    i=2;
    count=0;
    while(i<n/2)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
        i++;
    }
        if(count!=0 || n==1)
        {
            printf("%d is not a prime number",n);
        }
        else
        {
            printf("%d is a prime number",n);
        }
    return 0;
}

