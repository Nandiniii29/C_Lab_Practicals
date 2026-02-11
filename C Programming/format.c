#include<stdio.h>
int main()
{
    int x=55;
    printf("\n%d",x);
    printf("\n%c %d %f",'b',35,4.5);      //can't use double quotes for character
    printf("\n%10d% 8.3f",753,4.1657);    //width of 10 for integer and 8 for float
    printf("\n%-5d% 8.2f",756,89.675);    //left align integer with width of 5 and float with width of 8 and 2 decimal places
    printf("\n%5d% 8.3f",753,4.1657);     //right align integer with width of 5 and float with width of 8 and 3 decimal places
    printf("\n%05d% 8.3f",673,556.1771);  //pad integer with leading zeros to make width of 5 and float with width of 8 and 3 decimal places
}