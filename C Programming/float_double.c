#include<stdio.h>
int main()
{
    float f=1.234567890123;
    double d=1.234567890123;
    // printf("\n float: %f",f);
    // printf("\n double: %lf",d);
    printf("\n float: %.13f",f);
    printf("\n double: %.13lf",d);
}
//OUTPUT for 1
//float: 1.234568
//double: 1.234568

//OUTPUT for .13f
//float: 1.2345678806305            (cant store long int will give another value than original so we use long float i.e. double)
//double: 1.2345678901230