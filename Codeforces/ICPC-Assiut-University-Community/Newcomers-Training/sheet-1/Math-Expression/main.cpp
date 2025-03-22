#include<iostream>
using namespace std;
int main() {

	int a, b;
	long long c,r;
	char s, q;
	cin >> a >> s >> b >> q >> c;

	if (s == '+')
		r = a + b;
	else if (s == '-')
		r = a - b;
	else
		r = a * b;

	if (r == c)
		cout << "Yes" << endl;
	else
		cout << r << endl;

	return 0;
}