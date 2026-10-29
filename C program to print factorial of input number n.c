// C program to print factorial of input number n

#include<stdio.h>
int main()

{
    int i,n,factorial;//variable declaration
    printf("enter n:");
    scanf("%d",&n);
    i=1;//loop variable intilization
    factorial=1;
    while(i<=n)
    {
        factorial=factorial*i;
        i=i+1;//loop variable updation
    }
    printf("%d factorial is: %d",n,factorial);
    return 0;
}

