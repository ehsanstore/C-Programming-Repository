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
        printf("enter the print value %d\n",a[i]);
    }

}

