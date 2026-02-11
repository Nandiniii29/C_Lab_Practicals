#include<stdio.h>
int main(){
    float celcius;
    float farenheit;
    
    scanf("%f",&celcius);
    farenheit=(((celcius*9)/5)+32);
    printf("%.2f",farenheit);

}