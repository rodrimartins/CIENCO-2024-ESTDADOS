#include <iostream>

using namespace std;

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += mat[i][i];
    }

    cout << "Soma da diagonal principal: " << sum << endl;

    return 0;
}

