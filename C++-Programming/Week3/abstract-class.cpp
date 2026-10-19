
#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

class Rectangle : public Shape {
public:
    float length, breadth;

    void area() override {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;

        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

class Circle : public Shape {
public:
    float radius;

    void area() override {
        cout << "Enter radius: ";
        cin >> radius;

        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    Shape *s;

    s = &r;
    s->area();

    s = &c;
    s->area();

    return 0;
}
