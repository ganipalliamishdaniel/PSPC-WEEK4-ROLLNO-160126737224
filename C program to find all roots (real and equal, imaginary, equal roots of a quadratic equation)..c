//Write a C program to find all roots (real and equal, imaginary, equal roots of a quadratic equation).
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,root1,root2,D;//variable declaration
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);
    D=b*b-4*a*c;
    root1=(-b+sqrt(D))/2*a;
    root2=(-b-sqrt(D))/2*a;
    printf("the quadratic equation is:%dx^2+%dx+%d\n",a,b,c);
    printf("the root1 of the equation is:%d\n",root1);
    printf("the root2 of the equation is:%d\n",root2);
    if(D>0)
    {
        printf("%d,%d are real and distinct roots\n",root1,root2);
    }
    else if(D<0)
    {
        printf("%d,%d are imaginary roots\n",root1,root2);
    }
    else
    {
        printf("%d,%d are real and equal roots\n",root1,root2);
    }
 
}

