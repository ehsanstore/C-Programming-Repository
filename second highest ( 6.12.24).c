#include<stdio.h>
int main()
{
    int i,n,first_highest,second_highest;
    printf("Enter the array size :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    first_highest=a[0];
    second_highest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>first_highest)
        {
            second_highest=first_highest;
            first_highest=a[i];
        }
        else if(a[i]>second_highest&&a[i]<first_highest)
        {
            second_highest=a[i];
        }
    }
    printf("First highest : %d\n",first_highest);
    printf("Second highest : %d\n",second_highest);

}
