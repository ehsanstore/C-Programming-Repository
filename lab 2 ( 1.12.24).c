#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    int i,s1,s2;
    gets(a);
    gets(b);
    s1=strlen(a);
    s2=strlen(b);
    if(s2>s1)
    {
        s1=s2;
    }
    for(i=0;i<s1;i++)
    {
        if(a[i]!=b[i])
        {
            break;
        }
    }
    if(i==s1)
    {
        printf("equal\n");
    }
    else
    {
        printf("not equal\n");
    }
}

