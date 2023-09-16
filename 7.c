//swap two value without using third variable. 
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    a=a+b;//assume a=10,b=20 =30
    b=a-b;//10-20=-10
    a=a-b;//10-20=10
    printf("a is=%d\nb is=%d",a,b);
    return 0;
}