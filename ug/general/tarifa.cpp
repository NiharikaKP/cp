#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, p, mb;
    cin >> x >> n;
    mb = (n + 1) * x;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        mb = mb - p;
    }
    cout << mb << "\n";
}