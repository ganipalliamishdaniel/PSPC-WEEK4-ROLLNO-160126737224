//C program to find to display the factors of a given number

#include<stdio.h>
int main()
{
    int n,temp,i;
    printf("enter n:");
    scanf("%d",&n);
    
    i=1;
    printf("the factors of %d are: ",n);
    while(i<=n)
    {
        if(n%i==0)
        {
           printf("%d ",i);
           
        }
        i++;
    }
    
}

