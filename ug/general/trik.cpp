#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.size();
    int l = 1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'A')
        {
            if (l == 1) 
                l = 2;
            else if (l == 2)
                l = 1;
        }
        else if (s[i] == 'B')
        {
            if (l == 2) 
                l = 3;
            else if (l == 3)
                l = 2;
        }
        else 
        {
            if (l == 1) 
                l = 3;
            else if (l == 3)
                l = 1;
        }
    }
    cout << l << "\n";
}