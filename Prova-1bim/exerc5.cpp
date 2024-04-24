#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;
    int z = 30;

    int* ptr1 = &x;
    int* ptr2 = &y;

    *ptr1 = *ptr1 + *ptr2;

    ptr1 = &z;

    *ptr2 = *ptr2 + *ptr1;

    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;

    return 0;
}
