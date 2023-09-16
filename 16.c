/*take a three digit number from the user and rotate 
its digits by one position towards the right*/ 
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,a,rotate;
    printf("enter num:\n");
    scanf("%d",&num);
    a=num%10;
   int b=num/10;
   rotate=(a*100)+b;
   printf("rotate number=%d",rotate);
   return 0;
}