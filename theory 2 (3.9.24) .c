#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>=65&&a<=90)
    {
        printf("Uper class letter = %c\n",a);
    }
    else if(a>=97&&a<=122)
    {
        printf("Lower class letter = %c\n",a);
    }
    else
    {
        printf(" is not an alphabet = %c\n",a);
    }


}


