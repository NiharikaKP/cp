#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    const double pi = M_PI;
    double areap = pi * pow(r, 2);
    double s = abs(r - c);
    double areac = pi * pow(s, 2);
    double abserror = abs((areac / areap) * 100);
    cout << fixed << setprecision(6) << abserror << "\n";
}