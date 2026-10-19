#include <bits/stdc++.h>
using namespace std;

class shape{
public:
    void display(){
        cout<<"This is shape\n";
    }
};
class rectangle: public shape{
public:
    int length = 10, breadth = 40;
    void area(){
    cout<<"Area of rectangle is "<<length * breadth;
}
};
class circle: public shape{
public:
    int radius = 30;
    void area(){
        cout<<"Area of circle "<<3.14*radius*radius<<endl;
    }
};
int main(){
    rectangle r;
    circle c;
    r.area();
    c.area();
}