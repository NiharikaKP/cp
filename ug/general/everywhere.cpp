#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, count = 0;
        cin >> n;
        string cities[n];
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            bool same = false;
            for (int k = 0; k < j; k++)
            {
                if (s == cities[k])
                {
                    same = true;
                    break;
                }
            }
            if (!same) {
                cities[count] = s;  // Store the city only if it's unique
                count++;
            }
        }
        cout << count << endl;
    }
}