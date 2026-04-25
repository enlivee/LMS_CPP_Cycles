#include <iostream>
using namespace std;

void p8() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    cout << x << " ";
    int cur = x;
    for (int i = 2; i <= n; i++) {
        cin >> x;
        if (x == cur) continue;
        cout << x << " ";
        cur = x;
    }
}