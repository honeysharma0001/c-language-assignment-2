//program to swap value of two int variable using xop operator
#include<stdio.h>
#include<conio.h>
int main()
{ 
    int a,b;
    printf("enter a and b:\n");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a is=%d\nb is=%d",a,b);
    return 0;
}