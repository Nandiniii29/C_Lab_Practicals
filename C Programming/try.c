#include<stdio.h>
int main(){
    // float f;
    // f=3/2;
    // printf("ans is %d",3/2);
    // printf("\nans is %f",3.0/2);
    // printf("\nans is %f",f);
    // f=(float)(3)/2;
    // printf("\n%f",f);

    // float x=10;
    // float y=4;
    // printf("\n Result: %d",x/y);                  // here x and y are float but we are fetching by %d so it wont work and is 0
    // printf("\n Result: %f",x/y);                  // here the ans is 2.50000 because they are float and fetched by float 
    printf("\n Result: %d",10/4);                    // here the ans is 2 because they are int and fetched by int
    printf("\n Result: %f",10/4);                    // here 10 and 4 are int but we are fetching by %f so it wont work and is 0
}
