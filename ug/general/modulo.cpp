#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int mod[10], count = 0;
    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        mod[i] = n % 42;
        bool same = false;
        for (int j = 0; j < i; j++) {
            if (mod[i] == mod[j]) {
                same = true;
                break;
            }
        }
        if (!same) {
            count++;
        }
    }
    cout << count << endl;
}