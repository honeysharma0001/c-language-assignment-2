//print unit digit of a given number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,s;
    printf("enter num:\n");
    scanf("%d",&num);
    s=num%10;
    printf("last digit=%d",s);
    return 0;
}