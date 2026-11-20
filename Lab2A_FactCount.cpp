// Lab 2A - Task 2: factorial, counting multiplications and calls
#include <iostream>
using namespace std;

long long mults = 0;
long long calls = 0;

long long factorialIter(int n) {
    calls++;
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = result * i;
        mults++;
    }
    return result;
}

long long factorialRec(int n) {
    calls++;
    if (n == 0) return 1;
    mults++;
    return n * factorialRec(n - 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    mults = 0;
    calls = 0;
    long long f1 = factorialIter(n);
    cout << "Iterative: " << n << "! = " << f1
         << ", multiplications = " << mults
         << ", calls = " << calls << endl;

    mults = 0;
    calls = 0;
    long long f2 = factorialRec(n);
    cout << "Recursive: " << n << "! = " << f2
         << ", multiplications = " << mults
         << ", calls = " << calls << endl;

    return 0;
}
