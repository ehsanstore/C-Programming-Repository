#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the array size :");
    scanf("%d",&n);
    int a[n+1];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the position :");
    int p;
    scanf("%d",&p);
    for(i=n; i>=p; i--)
    {
        a[i]=a[i-1];
    }
    int m;
    scanf("%d",&m);
    a[p-1]=m;
    for(i=0; i<n+1; i++)
    {
        printf("updated array = %d\n",a[i]);
    }


}
