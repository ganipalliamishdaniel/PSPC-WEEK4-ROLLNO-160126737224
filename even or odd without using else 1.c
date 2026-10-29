//Write a C program to find whether given number is even or odd without using else
#include<stdio.h>
int main()
{
    int num;//variable declaration
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2!=0)
    {
    	goto(odd);
	}
	printf("%d is even",num);
	
	switch(odd)
	{
		printf("%d is odd",num);
	}
	
}
  
