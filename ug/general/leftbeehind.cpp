#include <bits/stdc++.h>
using namespace std;

int main() {
    int sweet, sour;
    
    while (true) {
        cin >> sweet >> sour;
        
        // Terminating condition
        if (sweet == 0 && sour == 0) {
            break;
        }
        
        // Checking conditions in order of priority
        if (sweet + sour == 13) {
            cout << "Never speak again." << endl;
        } else if (sour > sweet) {
            cout << "Left beehind." << endl;
        } else if (sweet > sour) {
            cout << "To the convention." << endl;
        } else {
            cout << "Undecided." << endl;
        }
    }
    
    return 0;
}
