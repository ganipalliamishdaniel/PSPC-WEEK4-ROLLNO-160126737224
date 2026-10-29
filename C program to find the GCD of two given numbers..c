//C program to find the GCD of two given numbers.

#include<stdio.h>
int main()

{
    int a,b,small;//variable declaration
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    if(a<b)
    {
        small=a;
    }
    else
    {
        small=b;
    }
    while(1)
    {
        if(a%small==0 && b%small==0)
        {
            printf("the GCD of %d and %d is %d",a,b,small);
            break;
        }
        small--;
    }
    return 0;
}

