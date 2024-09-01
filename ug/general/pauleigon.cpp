#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    cin >> n >> p >> q;
    int x = p + q;
    int y = x / n;
    if (y % 2 == 0) {
        cout << "paul\n";
    }
    else {
        cout << "opponent\n";
    }
}