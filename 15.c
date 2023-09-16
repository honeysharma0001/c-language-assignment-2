//check whether the given number is even or odd using bitwise operator.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    if(num&1==1)
    printf("odd no!");
    else
    printf("even no!");
    return 0;
}