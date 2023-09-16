/*program to take the last digit of a no stored in a variable as zero*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    int last=num%10;
    num=num-last;
    printf("number=%d",num);
    return 0;
}