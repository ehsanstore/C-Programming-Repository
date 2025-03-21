#include<stdio.h>
int main()
{
    int s,x,y;
    scanf("%d%d",&x,&y);
    for( ; x>9&&y>9; )
    {
        x=x/10;
        y=y/10;
        s=x+y;

    }
    printf("%d + %d = %d\n",x,y,s);


}

