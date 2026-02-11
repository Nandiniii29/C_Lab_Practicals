#include<stdio.h>
int main(){
    int a;
    double factorial=1;     //we use double so values of big numbers like 50 and 100 can be stored in here
    int i=1;
    
    printf("Enter number : ");
    scanf("%d",&a);

    // for (i=1;i<=a;i++){
    //     factorial=factorial*i;
    // }
    while(i<=a){
        factorial=factorial*i;
        i++;   }
    printf("Factorial = %.0f",factorial);
    return 0;
}