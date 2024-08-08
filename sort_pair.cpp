#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, string>> v; // {scores, name}
    
    v.push_back({90, "niharika"});
    v.push_back({92, "nisha"});
    v.push_back({85, "reena"});
    v.push_back({87, "manvi"});
    v.push_back({85, "aashi"});

    sort(v.begin(), v.end());

    for (int i = 0, n = v.size(); i < n; i++)
    {
        cout << v[i].second << endl;
    }
}