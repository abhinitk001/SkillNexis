#include <iostream>
using namespace std;

class Student {
public:
    int age;
    string name;
    Student() {
        age = 18;
        name = "Unknown";
    }
    Student(int a) {
        age = a;
        name = "Rahul";
    }
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2(20);
    Student s3("Aman", 21);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}