/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    int i,j,s1,s2,n;
    s1=strlen(str1);
    s2=strlen(str2);
    j=s1;
    n=s1+s2;
    for(i=0;i<s2;i++)              //manually
    {
        str1[j]=str2[i];
        j++;
    }
    str1[n]='\0';
    puts(str1);


}*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);                        //built-in-function
    strcat(str1,str2);
    puts(str1);


}

