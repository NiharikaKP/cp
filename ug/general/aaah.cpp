#include <bits/stdc++.h>
using namespace std;

int main() {
    string john, doctor;
    cin >> john >> doctor;
    int size1 = john.size();
    int size2 = doctor.size();

    if (size1 >= size2) {
        cout << "go" << "\n";
    }
    else {
        cout << "no" << "\n";
    }
}