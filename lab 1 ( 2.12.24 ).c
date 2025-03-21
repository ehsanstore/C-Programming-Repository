#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],reverse[1000];
    int length,i,j;
    printf("Enter a string :");
    scanf("%s",str);
    length=strlen(str);
    j=length-1;                 //another way
    for(i=0; i<length; i++)
    {
        reverse[i]=str[j];
        j--;

    }
    reverse[i]='\0';
    printf("%s",reverse);
}



#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],reverse[1000];
    int length,i,j,temp;
    printf("Enter a string :");
    scanf("%s",str);
    length=strlen(str);
    for(i=0,j=length-1; i<length; i++,j--)
    {                                          // another way
       reverse[i]=str[j];

    }
    reverse[i]='\0';

    printf("%s",reverse);
}


#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Enter a string :");         // built-in function diye
    gets(str);
    strrev(str);
    puts(str);
}





