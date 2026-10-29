//c progarm to print fibonacci series
#include<stdio.h>
int main()
{
	int n,i,f=0,s=1,th;
	printf("enter n:");
	scanf("%d",&n);
	printf("The fibonacci series upto %d are: ",n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",f);
		th=f+s;
		f=s;
		s=th;
	}
 		return 0;
}
