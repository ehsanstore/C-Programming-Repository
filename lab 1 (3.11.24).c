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
    int max=a[0];
    int mini=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<mini)
        {
            mini=a[i];
        }
    }
    printf("maximum element in array = %d\n",max);
    printf("minimum element in array = %d\n",mini);
}
