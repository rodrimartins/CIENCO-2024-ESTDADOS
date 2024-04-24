#include <iostream>

using namespace std;

int main(){

    int n = 10;
    while (n<=20){
        if (n > 30){
            break;
        }
        cout << n << endl;
        n++;
    }
}
