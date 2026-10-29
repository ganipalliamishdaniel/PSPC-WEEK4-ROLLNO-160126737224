//Write a C program to find whether the person is eligible to vote or not

#include <stdio.h>

int main()
{
    int age;//variable declaration
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("%d:your eliglibe for vote",age);
    }
    else
    {
        printf("%d:your not elgible for vote",age);
    }
    return 0;
}

