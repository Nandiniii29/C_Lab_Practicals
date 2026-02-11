#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a;
    float f;
    char ch;
    double d;
    char st[10];
    bool flag=true;

    scanf("\n%d",&a);
    scanf("\n%f",&f);
    scanf("\n%c",&ch);
    scanf("\n%lf",&d);
    scanf("\n%s",st);               //WE DONT USE &

    printf("\nint : %d",a);
    printf("\nfloat : %f",f);
    printf("\nchar : %c",ch);
    printf("\ndouble : %lf",d);
    printf("\nstring : %s",st);
    printf("\nboolean : %d",flag);
    printf("\nint address : %p",&a);    //HEXADECIMAL ADDRESS  //%p IS for address
     
    return 0;

}