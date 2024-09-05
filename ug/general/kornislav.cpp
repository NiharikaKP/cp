#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int steps[] = {a, b, c, d};
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (steps[j] < steps[i]) {
                int temp = steps[i];
                steps[i] = steps[j];
                steps[j] = temp; 
            }
        }
    }
    int min = steps[0] * steps[2];
    cout << min << endl;
}