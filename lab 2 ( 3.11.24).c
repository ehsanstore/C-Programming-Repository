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
    int even=0;
    int odd=0;

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even=even+1;

        }
        else if(a[i]%2!=0)
        {
            odd=odd+1;

        }
    }
    printf("total number of even element in array = %d\n",even);
    printf("total number of odd element in array = %d\n",odd);
}




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

    for(i=0; i<n; i++)                                  // array'r maddhome even or odd number print korar code

    {
        if(a[i]%2==0)
        {
            printf("even element = %d\n",a[i]);
        }
        else if(a[i]%2!=0)
        {

            printf("odd element = %d\n",a[i]);
        }
    }

}

