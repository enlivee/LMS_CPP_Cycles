#include <iostream>

using namespace std;

void p6() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (n%i == 0) {
            cout << i << endl;
            break;
        }
    }
}