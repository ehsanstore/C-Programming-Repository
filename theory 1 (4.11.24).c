#include <stdio.h>

int main()
{
    int n,i;


    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n+1];
    for(i = 0; i<n; i++)
    {

        scanf("%d", &a[i]);
    }
    int j;
    scanf("%d", &j);
    a[i] = j;
    printf("updated array :");
    for(i = 0; i<n+1; i++)
    {
        printf("%d ", a[i]);
    }

}

