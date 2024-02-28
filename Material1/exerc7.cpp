#include <iostream>

using namespace std;
int main()
{
	int num = 1;
	while (num < 501){
		if (num % 5 == 0){
			cout << num << " e multiplo" << endl;
		}
			num = num + 1;
    }
	return 0;
}
