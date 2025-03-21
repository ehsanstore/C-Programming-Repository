#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int n;
    gets(a);
    gets(b);
    n=strcmp(a,b);
    if(n==0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }
}
