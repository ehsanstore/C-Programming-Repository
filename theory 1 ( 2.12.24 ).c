/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],reverse[1000];
    int found=1,length,i,j;
    printf("Enter a string :");
    scanf("%s",str);
    length=strlen(str);
    j=length-1;
    for(i=0; i<length; i++)
    {
        reverse[i]=str[j];
        j--;

    }
    reverse[i]='\0';
    for(i=0; i<length; i++)

    {                                              //1st way
        if(str[i]==reverse[i])
        {
            found=1;
        }
        else
        {
            found=0;
            break;
        }
    }
    if(found==1)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome");
    }

}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],reverse[1000];
    int found=1,length,i,j;
    printf("Enter a string :");
    scanf("%s",str);
    length=strlen(str);
    j=length-1;
    for(i=0; i<length; i++)
    {
        reverse[i]=str[j];
        j--;

    }
    reverse[i]='\0';
    for(i=0; i<length; i++)

    {
        if(str[i]!=reverse[i])
        {
            found=0;
            break;           // 2nd way
        }
    }
    if(found==1)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome");
    }

}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],reverse[1000];
    int length,i,j;
    printf("Enter a string :");
    scanf("%s",str);
    length=strlen(str);
    j=length-1;                                   //3rd way
    for(i=0; i<length; i++)
    {
        reverse[i]=str[j];
        j--;

    }
    reverse[i]='\0';
    for(i=0; i<length; i++)

    {
        if(str[i]!=reverse[i])
        {
            break;
        }
    }
    if(i==length)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome");
    }

}*/


















