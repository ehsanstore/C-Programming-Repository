#include<stdio.h>
int main()
{
    FILE *p;
    p=fopen("showing.txt","w");
    char str[1000];
    scanf("%s",str);
    fprintf(p,"%s\n",str);
    printf("\ndata written to showing.txt successfully.");
}
