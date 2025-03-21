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
    printf("\n\n\n");
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            printf("print the negative value = %d\n",a[i]);
        }

    }

}

