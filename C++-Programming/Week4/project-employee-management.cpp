#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;
};

int main() {
    vector<Employee> emp;
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    ofstream fout("employee.txt");

    for (int i = 0; i < n; i++) {
        Employee e;
        cout << "Enter ID, Name and Salary: ";
        cin >> e.id >> e.name >> e.salary;

        emp.push_back(e);
        fout << e.id << " " << e.name << " "
             << e.salary << endl;
    }

    fout.close();

    cout << "\nEmployee Records:\n";
    ifstream fin("employee.txt");

    Employee e;
    while (fin >> e.id >> e.name >> e.salary) {
        cout << e.id << " " << e.name << " "
             << e.salary << endl;
    }

    fin.close();
    return 0;
}