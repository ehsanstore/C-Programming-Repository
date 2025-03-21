#include<stdio.h>
int sum()
{
    int sum,x,y;
    x=50;
    y=30;
    sum=x+y;
    return sum;
}

int main()
{
    int r;
    r= sum();
    printf("%d\n",r);
}

