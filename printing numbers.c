#include<stdio.h>
int main()
{
	int i,n,c;
	printf("check whether a given number is prime");
	scanf("%d",&n);
	i=1,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}	
	}
	if(c==2)
		{
			printf("%d is a prime \n",n);
		}
	
}
