 #include<stdio.h>
int main()
{
    int a[5],i,b[5],ab[5];
    printf("enter the value of a:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value of b:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i<5; i++)
    {
        ab[i]=a[i]+b[i];
    }
    printf("value of ab:\n");
    for(i=0; i<5; i++)
    {
        printf("%d",ab[i]);
    }

}
