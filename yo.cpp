#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);

    cout << v.size() << "\n"; // 3
    // cout << v[0] << " " << v[1] << " " << v[2];

    v.pop_back();
    cout << v.size() << "\n"; // 2

    v.clear();
    cout << v.size() << "\n"; // 3

    // cout << v[0] << " " << v[1] << " " << v[2];
    

}