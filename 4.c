#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,p,r,time;
    printf("enter principal:\n");
    scanf("%f",&p);
    printf("enter rate:\n");
    scanf("%f",&r);
    printf("enter time:\n");
    scanf("%f",&time);
    a=p*(pow((1+r/100),time));
    printf("compound interest:%f",a);
    return 0;
}