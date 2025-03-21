#include<stdio.h>
int main()
{
    int x=50,y=10,t;
    int *a,*b;
    a=&x;
    b=&y;
    t=*a;
    *a=*b;
    *b=t;
    printf("value swap : x = %d y = %d\n",x,y);


}

                //another way

#include<stdio.h>
int main()
{
    int x=50,y=10,t;
    int *a,*b;
    a=&x;
    b=&y;
    t=*a;
    *a=*b;
    *b=t;
    printf("value swap : x = %d y = %d\n",*a,*b);


}
