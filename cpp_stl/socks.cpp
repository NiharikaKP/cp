#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> sock;
    set<int> size;
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        int x;
        cin >> x;
        if (sock.count(x) == 1) {
            sock.erase(x);
        }
        else {
            sock.insert(x);
        }
        size.insert(sock.size());
    }

    auto it = size.end();
    it--;
    cout << *it;
}