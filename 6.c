//swap two number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("enter no a:\n");
    scanf("%d",&a);
    printf("enter no b:\n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("a is=%d\nb is=%d",a,b);
    return 0;
}