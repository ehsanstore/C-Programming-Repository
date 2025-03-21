#include<stdio.h>
int main()
{
    char str[1000];
    printf("Enter a string :");
    gets(str);
    int i,c=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            c++;
        }
    }
     printf("number of digits : %d\n",c);
}

