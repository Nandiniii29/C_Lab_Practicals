#include<stdio.h>
int main(){
    int num;
    int temp=0;
    int rev=0;
    printf("enter num : ");
    scanf("%d",&num);
    while (num>0){
        temp=num%10;
        num=num/10;
        rev=rev*10+temp;
    }
    printf("reverse is : %d",rev);
}