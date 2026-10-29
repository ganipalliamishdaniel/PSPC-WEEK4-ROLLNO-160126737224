//c-program to find factorial of given number
#include<stdio.h>
int main()

{
    int i,n,factorial;//variable declaration
    printf("enter n:");
    scanf("%d",&n);
    factorial=1;
    for(i=1;i<=n;i++)
    
    {
        factorial=factorial*i;
    }  
     printf("%d factorial is %d",n,factorial);
}

