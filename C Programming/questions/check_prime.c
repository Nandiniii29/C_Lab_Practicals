#include<stdio.h>
int main(){
    int num;
    int i;
    int count=0;
    printf("Enter num : ");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if (num%i==0){
            count+=1;
        }
    }
    if(num<=1){
        printf("Not prime");
    }
        if (count>2){
            printf("Not prime");
        }
        else{
            printf("Prime");
        }
    
}  
