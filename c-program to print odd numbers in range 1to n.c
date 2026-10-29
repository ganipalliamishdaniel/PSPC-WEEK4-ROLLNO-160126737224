//c-program to print odd numbers in range 1to n

#include<stdio.h>
int main()

{
    int i,n;//variable declaration
    printf("enter n:");
    scanf("%d",&n);
    i=1;//loop variable intilization
    while(i<=n)
    {
        if(i%2!=0)
        {
           printf("%d\t",i);
        
        } 
      i=i+1;//loop variable updation
    }
        
    return 0;
}

