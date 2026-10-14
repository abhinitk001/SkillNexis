#include <stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num%2 != 0){
        printf("The number is ODD");
    }
    else{
        printf("The number is EVEN");
    };
    return 0;
}