//Write a C program to find the given number is even or odd.

#include<stdio.h>
int main()

{
    int a;//variable  declaration
    printf("enter a:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is a even number",a);
    }
    else
    {
        printf("%d is a odd number",a);
    }
}

