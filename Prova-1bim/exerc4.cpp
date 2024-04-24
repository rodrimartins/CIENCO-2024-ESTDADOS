#include <iostream>

using namespace std;

int main() {
    int n, k, x;
    int v[8];

    v[0] = 12;
    v[1] = 145;
    v[2] = 1;
    v[3] = 3;
    v[4] = 67;
    v[5] = 9;
    v[6] = 45;
    n = 8;
    k = 3;
    x = 0;

    for (int j = n - 1; j >= k; j--) {
        v[j] = v[j - 1];
    }

    v[k] = x;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}
