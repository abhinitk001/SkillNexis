
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");
    fout << "Hello World";
    fout.close();

    ifstream fin("data.txt");
    string str;
    getline(fin, str);
    cout << str;
    fin.close();

    return 0;
}
