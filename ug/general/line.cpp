#include <bits/stdc++.h>
#include <string>
using namespace std;

int main (){
    int n, dec = 0, inc = 0;
    cin >> n;
    string words[n];
    string s1;
    cin >> s1;
    words[0] = s1;
    for (int i = 1; i < n; i++)
    {
        string s;
        cin >> s;
        words[i] = s;
        size_t length = s.length();
        bool decreasing = false, increasing = false;
        for (int j = 0; j < length; j++)
        {
            if (s[j] < words[i - 1][j])
            {
                decreasing = true;
                break;
            }
            else if (s[j] > words[i - 1][j])
            {
                increasing = true;
                break;
            }
        }
        if (decreasing) {
            dec++;
        }
        else if (increasing) {
            inc++;
        }
    }
    if (inc == n - 1) {
        cout << "INCREASING\n";
    }
    else if (dec == n - 1) {
        cout << "DECREASING\n";
    }
    else {
        cout << "NEITHER\n";
    }
    return 0;
}