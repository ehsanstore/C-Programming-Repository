#include<stdio.h>
int sum(int x,int y)
{
    int sum;
    sum=x+y;
    return sum;
}

int main()
{
    int r,a,b;
    a=90;
    b=80;
    r = sum(a,b);
    printf("%d\n",r);
}


