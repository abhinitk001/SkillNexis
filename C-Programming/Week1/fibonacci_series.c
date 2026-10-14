#include <stdio.h>
int main(){
    int num, sum=0, next=1, nextterm;
    printf("Enter the No of terms for Fibonacci series:");
    scanf("%d", &num);
    for(int i= 0; i<num ; i++){
        printf("%d , ", sum);
        nextterm = next + sum;
        sum = next;
        next = nextterm;

    }
}