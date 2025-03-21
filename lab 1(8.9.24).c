#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
    {
        printf("upper case letter = %c\n",ch-32);
    }
    else
    {
        printf("invalid");
    }




}
