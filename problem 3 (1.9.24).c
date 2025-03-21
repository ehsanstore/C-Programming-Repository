#include<stdio.h>
int main()
{
    int p,q,r;
    scanf("%d %d %d",&p,&q,&r);
    if(p>q&&p>r)
    {
        printf("Maximum %d\n",p);

    }
    else if(q>p&&q>r)
    {
        printf("Maximum %d\n",q);
    }
    else if(r>p&&r>q)
    {
        printf("Maximum %d\n",r);
    }
    else
    {
        printf("Equal");
    }



}

