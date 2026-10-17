#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={12,34,5,534,6,546,354,6354,4352,5473,67365,84,8,78,678,7,734,5424};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }    
        }
    }
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
