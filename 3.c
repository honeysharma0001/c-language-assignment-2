//find simple interest.
#include<stdio.h>
#include<conio.h>
int main()
{
    float pr,time,r,si;
    printf("enter princpal:\n");
    scanf("%f",&pr);
    printf("enter rate of interest:\n");
    scanf("%f",&r);
    printf("enter time:\n");
    scanf("%f",&time);
    si=(pr*time*r)/100;
    printf("%f",si);
    return 0;
}