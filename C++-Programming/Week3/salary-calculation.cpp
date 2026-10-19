#include <bits/stdc++.h>
using namespace std;
class employee{
public:
    string name;
    int hours_work;
    
    void salary(){
        cout<<"Name is "<<name<<endl;
        cout<<"Salary is - "<<hours_work<<"*50 = "<<hours_work*50;
    }
};
int main(){
    employee e1;
    e1.name = "Abhinit";
    e1.hours_work = 50;
    e1.salary();
}