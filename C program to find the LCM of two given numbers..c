//C program to find the LCM of two given numbers.

#include<stdio.h>
int main()

{
    int a,b,large;//variable declaration
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    if(a<b)
    {
        large=b;
    }
    else
    {
        large=a;
    }
    while(1)
    {
        if(large%a==0 && large%b==0)
        {
            printf("the LCM of %d and %d is %d",a,b,large);
            break;
        }
        large++;
    }
    return 0;
}

