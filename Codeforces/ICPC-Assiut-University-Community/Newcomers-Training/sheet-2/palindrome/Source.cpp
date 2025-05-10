#include<iostream>
using namespace std;
int main() {
	
	long long a, b=0,n;
	cin >> a;
	n = a;
	while (a != 0) {
		b = b*10 + a % 10;
		a /= 10;
	}
	cout << b << endl;
	if (b == n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}