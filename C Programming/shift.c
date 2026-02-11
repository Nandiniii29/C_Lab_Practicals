#include<stdio.h>
int main(){
    int a=128;
    printf("\n%d",a<<1);        //SHIFT LEFT
    printf("\n%d",a>>2);        //SHIFT RIGHT
    printf("\n%d",sizeof(8.9));     //  size 8 byte(double)
    printf("\n%d",sizeof(a));       // size of int 4 byte
    printf("\n%d",sizeof(8.9f));   //it becomes float 4 byte  

    return 0;
}