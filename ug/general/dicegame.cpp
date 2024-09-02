#include <bits/stdc++.h>
using namespace std;

int main () {
    int a1, b1, a2, b2, e1, d1, e2, d2;
    cin >> a1 >> b1 >> a2 >> b2 >> e1 >> d1 >> e2 >> d2;
    int g = a1 + a2 + b1 + b2;
    int e = e1 + e2 + d1 + d2;
    if (g > e) {
        cout << "Gunnar\n";
    }
    else if (g < e) {
        cout << "Emma\n";
    }
    else {
        cout << "Tie\n";
    }
}