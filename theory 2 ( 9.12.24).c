#include<stdio.h>
int main()
{
    int s,x=50,y=10;
    int *a,*b;
    a=&x;
    b=&y;
    s=*a+*b;
    printf("a pointer abong b pointer e sum kore pawa int variable s er value : %d\n",s);
}     // pointer diye sum korar code

#include<stdio.h>
int main()
{
    int s,x=50,y=10;
    s=*&x+*&y;
    printf("int variable s er value : %d\n",s);
}  // another way of sum of pointer



