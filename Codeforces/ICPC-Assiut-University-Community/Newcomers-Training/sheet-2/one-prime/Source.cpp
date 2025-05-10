#include<iostream>
using namespace std;
int main() {
	long long a;
	cin >> a;

	if (a == 2)
		cout << "YES" << endl;
	else {
		int i = 2;
		for (;i <= a / 2;i++)
			if (a % i == 0) {
				cout << "NO" << endl;
				break;
			}

		if (i == a / 2 + 1)
			cout << "YES" << endl;


	}


	return 0;
}