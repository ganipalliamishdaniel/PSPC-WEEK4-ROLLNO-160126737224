// C-program
// To print prime numbers from 1 to n

#include<stdio.h>

int main()
{
    int i,n,count,j; // variable declaration

    printf("enter n:");
    scanf("%d",&n);

    for(j=2; j<=n; j++)
    {
        count=0;

        for(i=2; i<j;)
        {
            if(j%i==0)
            {
                count++;
                break;
            }
            i++;
        }

        if(count==0)
        {
            printf("%d ",j);
        }
    }

    return 0;
}
