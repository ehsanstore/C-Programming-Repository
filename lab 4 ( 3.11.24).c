#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the array size : ");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        b[i]=a[i];
        printf("value of copy elements in array = %d\n",b[i]);
    }


}


