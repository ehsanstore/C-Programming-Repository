#include<stdio.h>
int main()
{
    long long X,Y;
    long long multi,sum,sub;
    scanf("%lld%lld",&X,&Y);
    multi=X * Y;
    sub=X - Y;
    sum=X + Y;
    printf("%lld + %lld = %lld\n",X,Y,sum);
    printf("%lld * %lld = %lld\n",X,Y,multi);
    printf("%lld - %lld = %lld\n",X,Y,sub);

}
