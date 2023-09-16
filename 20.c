/*WAP to store -8 in memory using bitwise operator*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num= -8;
    num=num & 0xFF;
    printf("value stored in memory: %d\n",num);
    return 0;
}