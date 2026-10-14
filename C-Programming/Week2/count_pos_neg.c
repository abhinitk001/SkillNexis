#include <stdio.h>
int main(){
    int arr[]= {12,-54,2,34,-56,-76,86433,-343,3,232,-323,2546,57,666,-43,0};
    int pos=0, neg=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<size; i++){
        if (arr[i]<0){
            neg++;
        }
        else if(arr[i]>0){
            pos++;
        }
        
    }
    printf("Number of Positive numbers in array is: %d\n", pos);
    printf("Number if Negative number in array is: %d", neg);
}