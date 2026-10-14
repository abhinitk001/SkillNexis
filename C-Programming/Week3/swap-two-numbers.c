#include <stdio.h>
int main(){
    int nu1, nu2, temp;
    int *num1 = &nu1;
    int *num2 = &nu2;
    printf("Enter number 1:");
    scanf("%d", num1);
    printf("Enter number 2:");
    scanf("%d", num2);
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("%d\n",*num1);
    printf("%d", *num2);
    return 0;


}