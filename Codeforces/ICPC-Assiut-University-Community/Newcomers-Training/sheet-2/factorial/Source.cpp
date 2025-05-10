#include<iostream>
using namespace std;
int main() {
	int a,t;
	long long fact;;
	cin >> t;
	while (t--) {
		cin >> a;
		fact = 1;
		for (int i = 2;i <= a;i++)
			fact *= i;
		cout << fact << endl;
	}

	return 0;
}