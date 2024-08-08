#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    set<int> s;

    s.insert(10);
    s.insert(15);
    s.insert(10);

    cout << s.count(10) << "\n";
    cout << s.count(9) << "\n";
    cout << s.count(11) << "\n";
    cout << s.count(15) << "\n";

    s.erase(10);
    cout << s.count(10) << "\n";
    s.insert(10);
    cout << s.count(10) << "\n";

}