#include<stdio.h>
int main()
{
    int n,i,s=0;
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
        s=s+a[i];

    }
    printf("print the value of sum %d\n",s);

}

