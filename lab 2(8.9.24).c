#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=65&&ch<=89)||(ch>=97&&ch<=121))
    {
        printf("next character = %c\n",ch+1);
    }
    else if((ch==90)||(ch==122))
    {
        printf("last character = %c\n",ch);

    }
    else
    {
        printf("invalid");
    }



}

