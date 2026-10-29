//C program to check whether given number is Armstrong or not

#include<stdio.h>
int main()

{
    int n,sum,rem,temp;//vatiable declaration
    printf("enter n:");
    scanf("%d",&n);
    temp=n;
    for(sum=0;n>0;n=n/10)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        
    }
      if(temp==sum)
      {
          printf("%d is a amstrong number",temp);
      }
      else
      {
          printf("%d is not a amstrong number",temp);
      }

}

