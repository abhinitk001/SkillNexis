#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;
    int n, roll;
    string name;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter roll number and name: ";
        cin >> roll >> name;
        students[roll] = name;
    }

    cout << "\nStudent Details:\n";
    for (auto s : students) {
        cout << "Roll: " << s.first
             << ", Name: " << s.second << endl;
    }

    return 0;
}
