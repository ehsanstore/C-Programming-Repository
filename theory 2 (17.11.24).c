#include<stdio.h>
int main()
{
    int r,i,j,c;
    printf("Enter the row and column size :");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],sub[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\nprint the sum of array :");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("");
    }
}

