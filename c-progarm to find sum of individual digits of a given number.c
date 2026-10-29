//c-progarm to find sum of individual digits of a given number

#include<stdio.h>
int main()

{
    int i,n,sum,rem;//vatiable declaration
    printf("enter n:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;)
    {
      
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
       
  printf("the sum of individual digits is:%d",sum);
}

