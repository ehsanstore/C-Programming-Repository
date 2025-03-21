#include <stdio.h>
int main()
{
    int i,n, p;
    printf("Enter the array size : ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position : ");
    scanf("%d", &p);
    for(i=p-1; i<n-1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}


