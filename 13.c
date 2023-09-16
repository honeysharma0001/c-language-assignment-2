/*1 USD IS INR 82.99.TAKE THE AMOUNT OF INR AND CONVERT IT 
INTO USD.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float USD,INR;
    printf("enter USD:\n");
    scanf("%f",&USD);
    INR=USD*82.99;
    printf("USD convert INR=%.2f",INR);
    return 0;
}