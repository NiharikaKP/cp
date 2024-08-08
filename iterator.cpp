#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {10, 15, 12, 5, 20};

    //vector<int>::iterator it = v.begin();
    auto it = v.begin();

    cout<<*it << endl;
    it++;
    cout<<*it << endl;
    it--;
    cout<<*it << endl;
    cout<<*(it + 3) << endl;
}