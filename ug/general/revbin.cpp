#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(void) {
    int n, rev = 0;
    cin >> n;
    double l = log2((double) n);
    int count = l;
    for (int i = 0; i <= l; i++) {
        int x = n % 2;
        double result = pow(2, count);
        rev = rev + (x * (int) result);
        n = n / 2;
        count--;
    }
    cout << rev << endl;
}