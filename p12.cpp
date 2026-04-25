#include <iostream>
using namespace std;

void p12() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = i;
        int k = 1;
        while (k < i) {
            cout << k;
            k++;
        }
        while (j!=0) {
            cout << j;
            j--;
        }
        i+=1;
        cout << endl;
    }
}
