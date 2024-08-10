#include <bits/stdc++.h>
using namespace std;

void print_price(map<int, pair<int, int>>::iterator it, int c, map<int, pair<int, int>> &tshirt);
int main(void){
    vector<int> v, va, vb;
    map<int, pair<int, int>> tshirt;

    // Prompt the user for the no. of tshirts
    int a, b, c, n, m, p;
    cin >> n;

    // prompt for the Price of the i-th tshirt
    for (int i = 0; i < n; i++) {
        cin >> p;
        v.push_back(p);
    }

    // prompt for the front color of the i-th tshirt
    for (int i = 0; i < n; i++) {
        cin >> a;
        va.push_back(a);
    }

    // prompt for the back color of the i-th tshirt
    for (int i = 0; i < n; i++) {
        cin >> b;
        vb.push_back(b);
    }

    for (int i = 0; i < n; i++) {
        tshirt[v[i]] = {va[i], vb[i]};
    }

    // Prompt the user for the no. of buyers
    cin >> m; 

    // Prompt the user for the buyer's favorite color
    for (int j = 0; j < m; j++){
        cin >> c;
        auto it = tshirt.begin();
        print_price(it, c, tshirt);
    }
}

void print_price(map<int, pair<int, int>>::iterator it, int c, map<int, pair<int, int>> &tshirt)
{
    if (it == tshirt.end())
    {
        cout << -1 << " ";
    }
    else if ((c == (it->second).first) || (c == (it->second).second))
    {
        cout << it->first << " ";
        tshirt.erase(it->first);
    }
    else
    {
        it++;
        print_price(it, c, tshirt);
    }
}