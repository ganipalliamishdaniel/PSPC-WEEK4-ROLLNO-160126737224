//c-program to print numbers from 1 to n

#include<stdio.h>
int main()

{
    int i,n;//variable declaration
    printf("enter n:");
    scanf("%d",&n);
    i=1;//loop variable intilization
    while(i<=n)
    {
     printf("%d\t",i);
        i=i+1;//loop varible updation   
    }
     return 0; 
} 

