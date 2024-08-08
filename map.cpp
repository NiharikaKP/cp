#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> freq;

    freq[10]++;
    freq[10]++;
    freq[10]++;
    freq[10]++;

    cout<< freq[10] << " " << freq[4] << endl;
    map<int, int> m;

    cout << m.size() << endl;
    cout << m[15]; // instantly create the element and its value will be '0'

    cout << "\n";

    m[10] = 4;
    m[26];

    cout << m.size() << endl << m[10] << endl;

}