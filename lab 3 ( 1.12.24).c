/*#include<stdio.h>
int main()
{
    char a[1000];
    int i;
    scanf("%s",a);                           // upper to lower
    for(i=0; a[i]!='\0'; i++)
    {
        a[i]=a[i]+32;
    }
    printf("Lower case letter : %s\n",a);
}*/


#include<stdio.h>
int main()
{
    char a[1000];
    int i;                                     //lower to upper
    scanf("%s",a);
    for(i=0; a[i]!='\0'; i++)
    {
        a[i]=a[i]-32;
    }
    printf("Upper case letter : %s\n",a);
}


