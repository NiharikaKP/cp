#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a, b, c, d, h, s;
    cin >> a >> b >> c >> d;
    if (b > d) 
        h = b;
    else 
        h = d;
    if (a < c) 
        s = a;
    else
        s = c;
    int l = h - s;
    if (b < c) {
        l = l - (c - b);
    }
    else if (d < a) {
        l = l - (a - d);
    }
    cout << l << endl;
}