#include<stdio.h>
//int s;
int main()

{
    int i,s=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        s=s+i;
    }
    printf("%d\n",s);
}


