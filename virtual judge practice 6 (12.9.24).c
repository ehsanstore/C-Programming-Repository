
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if((N%4==0&&N%100!=0)||(N%400==0))
     {
         printf("I can participate in LCPC");
    }
    else
    {
        printf("I have to travel back to the past");
    }

   return 0;
}

