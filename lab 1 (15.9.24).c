#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(; n>9;)
    {
        n=n/10;

    }
    printf("%d\n",n);


}
