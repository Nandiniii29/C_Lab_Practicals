#include<stdio.h>
int main()
{
    int x;
    char ch;

    printf("Enter: ");
    scanf("%d",&x);

    printf("Enter: ");
    scanf("\n %c",&ch); //add space before %c to ignore whitespaces like tab , new line

    printf("\n int : %d",x);
    printf("\n char : %c",ch);
}