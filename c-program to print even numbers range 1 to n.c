//c-program to print even numbers range 1 to n

#include<stdio.h>
int main()

{
    int i,n;//variable declaration
    printf("enter n:");
    scanf("%d",&n);
    i=2;//loop variable intilization
    while(i<=n)
    {
        printf("%d\t",i);
        i=i+2;//loop variable updation
    }
    return 0;
}

