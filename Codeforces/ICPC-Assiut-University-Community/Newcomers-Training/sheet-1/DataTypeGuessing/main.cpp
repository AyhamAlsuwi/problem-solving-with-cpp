#include<iostream>
using namespace std;
int main() {
	long long n, k, a;
	cin >> n >> k >> a;
	if (n * k % a == 0)
		if (n * k / a  <= 2147483647)
			cout << "int" << endl;
		else
			cout << "long long" << endl;
	else
		cout << "double" << endl;

	return 0;
  }