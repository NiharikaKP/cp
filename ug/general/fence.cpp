#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a, b, c, d, sum = 0;
    cin >> a >> b >> c >> d;
    bool overlap = false;
    if ((a > c && a < d) || (b > c && b < d)) {
        overlap = true;
    }
    if (overlap) {
        if (a < c) {
            if (b < d) {
                sum = d - a;
            }
            else {
                sum = b - a;
            }
        }
        else {
            if (b < d) {
                sum = d - c;
            }
            else {
                sum = b - c;
            }
        }
    }
    else {
        sum = (b - a) + (d - c);
    }
    cout << sum << endl;

}