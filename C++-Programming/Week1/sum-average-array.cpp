#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int arr[]={12,43,53,4,545,5,45,2,35,243,5,5234,52,345,23,5,43523,55,63};
    int length = size(arr);
    for(int i=0;i<length; i++){
        sum += arr[i];
    }
    cout<<"Sum of array is :"<<sum<<endl;
    cout<<"Average of array is :"<< sum/length<<endl;
}