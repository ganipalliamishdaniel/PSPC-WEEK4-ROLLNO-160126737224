#include<stdio.h>
int main()
{
	float a,b,c;
	printf("angle A:");
	scanf("%f",&a);
	printf("angle B:");
	scanf("%f",&b);
	//for a triangle sum of all angles is always 180(A+B+C=180)
	c=180-a-b;
	printf("angle c:%.2f",c);
	
	
}
