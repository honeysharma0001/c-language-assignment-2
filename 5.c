//print without given number last digit.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    int s=num/10;
    printf("%d",s);
    return 0;
}