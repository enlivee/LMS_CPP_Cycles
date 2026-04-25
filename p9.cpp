#include <iostream>
using namespace std;

void p9() {
    int a, b;
    cin >> a;
    cin >> b;
    int max_sum = -1000;
    int max_elem;
    for (; a <= b; a++) {
        int sum = 0;
        for (int i = 1; i <= a; i++) {
            if (a%i==0) {
                sum += i;
            }
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_elem = a;
        }
    }
    cout << max_elem << " " << max_sum;
}