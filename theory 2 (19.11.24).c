/*#include<stdio.h>
int main()
{
    char a[10];
    scanf("%s",&a);
    printf("%s",a);
}*/

/*#include<stdio.h>
int main()
{
   // int n;
    //scanf("%d",&n);
    char a[100];
    scanf("%s",a);
    int i,c=0;
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    printf("Length of a string = %d\n",c);
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int i,c;
    c=strlen(a);
    printf("Length of a string = %d\n",c);
}*/


/*#include<stdio.h>
int main()
{
    char a[1000],c[1000];
    scanf("%s",a);
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
    }
    c[i]='\0';
    printf("Copy of a string = %s\n",c);
}*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],c[1000];
    scanf("%s",a);
    strcpy(c,a);
    printf("Length of a string = %s\n",c);
}








