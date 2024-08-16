#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m, t;
    cin >> h >> m;
    t = h * 60 + m;
    if (t < 45) {
        m = t - 45;
        m = 60 + m;
        cout << 23 << " " << m << "\n";
    }

    else if (t == 45) {
        cout << h << " " << "00" << "\n";
    }

    else {
        t = t - 45;
        h = t / 60;
        m = t % 60;
        cout << h << " " << m << "\n";
    }
}
