#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,sum,avg;
    printf("Enter number for 5 subjects: ");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    avg=sum/5;
    printf("Sum is %.2f",sum);
    printf("\nAverage is %.2f",avg);
}