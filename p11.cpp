#include <iostream>
using namespace std;

void p11() {
    int a, b;
    cin >> a;
    cin >> b;
    for (; a <= b; a++) {
        bool prostoe = true;
        if (a == 1) continue;
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                prostoe = false;
                break;
            }
        }
        if (prostoe) {
            cout << a << endl;
        }
    }
}