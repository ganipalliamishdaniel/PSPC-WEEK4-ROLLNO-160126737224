//c-program to find reverse of a given number
#include<stdio.h>
int main()
{
    int n,rem,rev,temp;//variable declaration
    printf("enter n:");
    scanf("%d",&n);
    temp=n;
    for(rev=0;n>0;)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("the reverse of %d is %d",temp,rev);
    
}

