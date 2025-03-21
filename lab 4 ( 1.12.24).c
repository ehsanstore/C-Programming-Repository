#include<stdio.h>
int main()
{
    char a[1000],s;
    int i;
    //scanf("%s",a);
    //getchar();
    gets(a);
    printf("search elemnt :");
    scanf("%c",&s);
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]==s)
        {
                printf("searching value index number : %d\n",i);
        }

    }

}



