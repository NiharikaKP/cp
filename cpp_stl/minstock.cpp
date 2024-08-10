#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    set<pair<int , string>> s;
    int n;
    cin >> n;
    for (int j = 0; j < n; j++){
        int i, y, z;
        string x;
        cin >> i;
        if (i == 1) {
            cin >> x;
            cin >> y;
            s.insert({y, x});
        }
        else if (i == 2) {
            cin >> x;
            cin >> z;
            s.erase({y, x});
            s.insert({z, x});
        }
        else if (i == 3) {
            string b;
            cin >> b;
            if (b == "BUY")
            {
                auto it = s.begin();
                cout << it->second << " ";
                cout << j + 1;
                s.erase({it->first, it->second});
            }
        }
    }
}