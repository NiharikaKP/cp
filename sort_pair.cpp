#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, string>> v; // {scores, name}
    
    v.push_back({90, "niharika"});
    v.push_back({90, "nisha"});
    v.push_back({85, "reena"});
    v.push_back({87, "manvi"});
    v.push_back({85, "aashi"});

    sort(v.begin(), v.end());

    for (int n = v.size(), i = n - 1; i >= 0; i--)
    {
        cout << v[i].second << endl;
    }
}