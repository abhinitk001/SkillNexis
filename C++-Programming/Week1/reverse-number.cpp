#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, sum = 0;
    cout<<"Enter number: ";
    cin>>a;
    while(a>0){
        sum = sum*10 + a%10;
        a=a/10;
    };
    cout<<"Reverse of number is :"<<sum;
}