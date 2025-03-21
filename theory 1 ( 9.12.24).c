#include<stdio.h>
int main()
{
    int x=10;
    printf("Normal variable er address : ");
    printf("%d\n",&x);
    int *p;
    p=&x;
    printf("pointer e assign kore rakha normal variable er address : ");
    printf("%d\n",p);
}


//pointer er sahajje normal variable er address ke je pointer
//hold kore /dhore rekhe sei address e print kore tar code

#include<stdio.h>
int main()
{
    int x=10;
    printf("normal variable er address : ");
    printf("%d\n",&x);
    int *p;
    p=&x;
    printf("pointer e assign kora normal variable er address er value : ");
    printf("%d\n",*p);
}

//pointer er sahajje normal variable er address pointer
//hold kore /dhore rekhe sei address e thaka value print korar code

