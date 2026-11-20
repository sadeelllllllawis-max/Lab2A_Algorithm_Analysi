// Lab 2A - Task 1: sum 1..n, counting additions
#include <iostream>
using namespace std;

long long ops = 0;
long long calls = 0;

long long sumToIter(int n) {
    long long total = 0;
    for (int i = 1; i <= n; i++) {
        total = total + i;
        ops++;
    }
    return total;
}

long long sumToRec(int n) {
    calls++;
    if (n == 0) return 0;
    ops++;
    return n + sumToRec(n - 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    ops = 0;
    calls = 0;
    long long s1 = sumToIter(n);
    cout << "Iterative: sum = " << s1
         << ", additions = " << ops << endl;

    ops = 0;
    calls = 0;
    long long s2 = sumToRec(n);
    cout << "Recursive: sum = " << s2
         << ", additions = " << ops
         << ", calls = " << calls << endl;

    return 0;
}
