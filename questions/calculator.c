#include<stdio.h>
int main(){
    int a,b;
    char op;
    int result;
    printf("Enter two numbers:",a,b);
    scanf("%d %d",&a,&b);
    printf("Enter operator:",op);
    scanf(" %c",&op);

    switch(op){
    case '+':
    result=a+b;
    printf("Addition: %d\n",result);
    break;

    case '-':
    result=a-b;
    printf("Subtraction: %d\n",result);
    break;

    case '*':
    result=a*b;
    printf("Multiplication: %d\n",result);
    break;

    case '/':
    result=a/b;
    printf("Division: %d\n",result);
    break;

    case '%':
    result=a%b;
    printf("Modulus: %d\n",result);
    break;

    default:
    printf("Enter a valid operator");
    
}
return 0;
}