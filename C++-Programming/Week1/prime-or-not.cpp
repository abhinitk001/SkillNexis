#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    bool isPrime = true;

    if (num <= 1) {
        isPrime = false;
    } else if (num == 2) {
        isPrime = true;
    } else if (num % 2 == 0) {
        isPrime = false;
    } else {
        int limit = sqrt(num);
        for (int i = 3; i <= limit; i += 2) {
            if (num % i == 0) {
                isPrime = false;
                break; 
            }
        }
    }

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is NOT a prime number." << endl;
    }

    return 0;
}
