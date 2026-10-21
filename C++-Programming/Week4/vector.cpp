#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n,x;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
}
}