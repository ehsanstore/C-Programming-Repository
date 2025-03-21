#include<stdio.h>
int main()
{
    int p,q;
    scanf("%d %d",&p,&q);
    if(p>q)
    {
        printf("Maximum %d\n",p);

    }
    else if(q>p)
    {
        printf("Maximum %d\n",q);
    }
    else
    {
        printf("Both are equal");
    }



}
