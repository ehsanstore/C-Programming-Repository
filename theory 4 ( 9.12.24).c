#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    //ptr = &arr[0];//ptr=arr;
    printf("Enter %d elements of the array:\n",n);
    for( i = 0; i < n; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    printf("\nOutput elements are:\n");
    ptr = arr;
    for( i = 0; i < n; i++)
    {
        printf("%d = %d\n",ptr,*ptr);
        ptr++;
    }


}

