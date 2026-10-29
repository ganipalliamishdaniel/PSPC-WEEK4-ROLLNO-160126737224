//amstrong number
#include <stdio.h>
#include<math.h>

int main()
{
    int n,temp,sum,rem,digits=0;
    printf("enter n:");
    scanf("%d",&n);
    sum=0;
    temp=n;
    int t=n;
    while(t>0)
        {
            digits++;
            t=t/10;
        }
    while(n>0)
        {
            rem=n%10;
            sum=sum+pow(rem,digits);
            n=n/10;
        }
    if(sum==temp)
    {
        printf("%d is amstrong number",temp);
    }
    else
    {
        printf("%d is not amstrong number",temp);
    }
}

