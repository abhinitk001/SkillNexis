#include <stdio.h>
int factorial(int n){
    int sum=1;
    for(int i= 0; i<n-1 ; i++){
        sum = sum *(n-i);
    }
    return sum;
}
int main(){
    printf("%d",factorial(5));
}