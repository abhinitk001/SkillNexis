#include <bits/stdc++.h>
using namespace std;
int main(){
    string c="this is num name";
    int s=0;
    int size = c.length();
    for(int i=0; i<size; i++){
        if(c[i]=='a' || c[i]=='e' || c[i]=='o' || c[i]=='i' || c[i]=='u'){
            s++;
        }
    }
    cout<<s;
    return 0;
}