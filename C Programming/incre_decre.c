#include<stdio.h>
int main(){
    int x=5;
    printf("\n 1. x= %d",x);
    printf("\n 2. x= %d",++x);
    printf("\n 3. x= %d",x);
    printf("\n 4. x= %d",++x);
    printf("\n 5. x= %d",x++);
    printf("\n 6. x= %d",++x);
    x++;
    printf("\n 7. x= %d",x);
    --x;
    printf("\n 8. x= %d",x);

}