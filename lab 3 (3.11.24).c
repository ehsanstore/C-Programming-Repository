#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the array size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    //int neg=0;
    for(i=0; i<n; i++)                                          // ei code ta negative value print korar jonno o negative value count korar jonno kora hoyeche
    {
        if(a[i]<0)
        {
           // neg=neg+1;
           printf("value of negative = %d\n",a[i]);
        }

    }
   // printf("total number of negative element in array = %d\n",neg);

}

