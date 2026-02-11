#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap: %d %d",a,b); //5 6
    a=a+b;      //11
    b=a-b;      //6
    a=a-b;      //5
    printf("\nAfter swap a = %d",a);
    printf("\nAfter swap b = %d",b);
    
    return 0;
}