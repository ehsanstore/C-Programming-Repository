#include<stdio.h>
int main()
{
    int m,n,years;
    scanf("%d%d",&m,&n);
   for(years=0;m<=n;years++)
        {
            m=m*3;
            n=n*2;

        }
       printf("%d\n",years);
}



