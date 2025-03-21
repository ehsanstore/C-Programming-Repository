#include<stdio.h>

int main()

{
    int i,s=0,n;
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        s=s+i;
    }
    printf("%d\n",s);
}


