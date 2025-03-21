#include<stdio.h>
int main()
{
    int max1,max2,A,B,C,chef,chefina;
    scanf("%d%d%d",&A,&B,&C);
    chef=A*C;
    chefina=B*C;
    max1=chef;
    max2=chefina;
    if(chef>chefina)
    {
        printf("%d\n",max1);
    }
    else if(chefina>chef)
    {
        printf("%d\n",max2);
    }
   return 0;
}



