// #include<stdio.h>
// int main(){
//     for(int i=1;i<11;i++){
//         printf("%d\t",2*i);
//     }
// }

#include<stdio.h>
int main(){
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    for (int i=1;i<11;i++){
        printf("%d * %d = %d\n",a,i,a*i);
    }
return 0;
}