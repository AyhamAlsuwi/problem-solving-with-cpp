#include<iostream>
using namespace std;
int main() {

	int a, b, min;
	cin >> a >> b;
	(a < b) ? min = a : min = b;
	for (int i = min;i > 0;i--)
		if (a % i == 0 && b % i == 0) {
			cout << i;
			break;
		}

	return 0;
}