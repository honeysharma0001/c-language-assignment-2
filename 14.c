/*find the position of first 1 when searching from LSB
to MSB.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,posi;
    printf("enter num:\n");
    scanf("%d",&num);
    posi=0;
    while(num>0)
    {
        if(num&1)
        {
            break;
        }
        num=num>>1;
        posi++;
    }
  printf("position of first 1 LSB to MSB:%d\n",posi);
  return 0;
}