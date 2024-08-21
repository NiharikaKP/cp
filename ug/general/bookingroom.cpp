#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, n;
    cin >> r >> n;
    int room[r];
    for (int i = 0; i < r; i++) {
        room[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        room[x - 1] = 1;
    }

    for (int i = 0; i < r; i++){
        if (room[i] == 0)
        {
            cout << i + 1 << "\n";
            return 0;
        }
    }

    cout << "too late\n";
}