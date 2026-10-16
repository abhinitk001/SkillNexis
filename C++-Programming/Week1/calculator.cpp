#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, choice;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Operation\n";
    cout<<"1. Addition \n";
    cout<<"2. Subtraction \n";
    cout<<"2 Multiplication \n";
    cout<<"3 Division \n";
    cout<<"Enter your choice \n";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<a+b;
        break;
        case 2:
        cout<<a-b;
        break;
        case 3:
        cout<<a*b;
        break;
        case 4:
        cout<<a/b;
        break;
    }
    return 0;
}
