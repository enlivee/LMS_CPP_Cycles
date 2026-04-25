#include <iostream>
using namespace std;

void p10() {
    int n;
    cin >> n;
    int sum = 0;
    while (true) {
        while (float(n)/10!=0) {
            sum = sum + n%10;
            n = n/10;
        }
        n = sum;
        sum = 0;
        if (n <= 9) break;
    }
    cout << n;
}