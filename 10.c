//input three digit no and display sum of digit no.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,s,b,c,a;
    printf("enter three digit no:\n");
    scanf("%d",&num);
    a=num/100;
    b=num%100;
    c=b%10;
    int m=b/10;
    s=a+m+c;
    printf("sum of digit=%d",s);
    return 0;
}