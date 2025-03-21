#include<stdio.h>
int main()
{
    int n,sum=0,first,last;
    scanf("%d",&n);
    last=n%10;
    for(first=n; n>9;)
    {
        n=n/10;

    }
    first=n;
    sum=first+last;
    printf("%d\n",sum);

}


