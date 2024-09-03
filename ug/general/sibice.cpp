#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w, h;
    cin >> n >> w >> h;
    double sqr_w = pow(w, 2);
    double sqr_h = pow(h, 2);
    double sqr_num = sqr_w + sqr_h;
    double num = sqrt(sqr_num);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if ((x <= w) || (x <= h) || (x <= (int) num)) {
            cout << "DA\n";
        }
        else {
            cout << "NE\n";
        }
    }
}