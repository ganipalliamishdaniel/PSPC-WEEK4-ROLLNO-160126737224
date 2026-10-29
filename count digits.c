#include<stdio.h>
int main()
{
	int n,count;
	printf("enter n:");
	scanf("%d",&n);
	while(n>0)
	{
		count++;
		n=n/10;
	}
	printf("number of digits:%d",count);
}
