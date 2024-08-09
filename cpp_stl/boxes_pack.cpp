#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }

    set<int> s;
    int box_count = 0;
    for (pair<int, int> x: m){
        s.insert(x.second);
        for (pair<int, int> y: m) {
            // Check if box x is smaller than box y (ax < ay).
            if (y.first > x.first && x.second != 0) {
                x.second = x.second - y.second;
                // if no. of y type boxes is greater than no. of x type boxes
                if (y.second > x.second) {
                    x.second = 0;
                }
            }
        }
        box_count = box_count + x.second;
    }

    // Check if the maximum no. of boxes is greater then the no. of boxes of maximum length if it is then print the max no. of boxes
    auto it = s.end();
    it--;
    if (*it > box_count) {
        cout << *it;
    }
    else {
        cout << box_count;
    }
}