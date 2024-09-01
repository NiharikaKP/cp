#include <bits/stdc++.h>
using namespace std;

int main() {
    int people[9];
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        int x;
        cin >> x;
        people[i] = x;
        sum = sum + people[i];
    }
    int extra = sum - 100;
    bool find = false;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            int y = people[i] + people[j];
            if (y == extra) {
                people[i] = 0;
                people[j] = 0;
                find = true;
                break;
            }
        }
        if (find) {
            break;
        }
    }
    for (int i = 0; i < 9; i++) {
        if (people[i] != 0) {
            cout << people[i] << endl;
        } 
    }
}