#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size){
    for(int left = 0, right = size - 1; left < right; left++, right--){
        swap(arr[left], arr[right]);
    }
}
int main(){
    int arr[] = {12, 3123, 4, 432, 43, 423, 5, 25, 2345, 234, 6, 3547, 465, 87, 8, 5769, 569, 46};
    int size = sizeof(arr) / sizeof(arr[0]); 
    reverse(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
