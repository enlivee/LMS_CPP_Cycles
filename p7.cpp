#include <iostream>

using namespace std;

void p7() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if ((5 <= i and i <= 9) or (17 <= i and i <= 37) or (78 <= i and i <= 87) == false) {
            continue;
        } else {
            cout << i << endl;
        }
    }
}