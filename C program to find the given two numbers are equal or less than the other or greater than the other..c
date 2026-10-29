//Write a C program to find the given two numbers are equal or less than the other or greater than the other.
#include<stdio.h>
int main()
{
    int num1,num2;//variable declaration
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("%d is greater than %d\n",num1,num2);
    }
    else if(num1<num2)
    {
        printf("%d is less than %d\n",num1,num2);
    }
    else
    {
        printf("%d is equal to %d\n",num1,num2);
    }
    return 0;
}

