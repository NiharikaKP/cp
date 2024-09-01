#include <bits/stdc++.h>
#include <string>
using namespace std;

int main (void) {
    int n, p;
    cin >> n >> p;
    cin.ignore(); // Ignore the newline character left in the input buffer
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
    }
    cout << p << endl;
}