#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
   if(m>n)
   {
       printf("Champion = %d\n",m);


   }
   else if(n>m)
   {
       printf("Champion = %d\n",n);

   }
   else
   {
       printf("both are champion %d\n",m);
   }

}


