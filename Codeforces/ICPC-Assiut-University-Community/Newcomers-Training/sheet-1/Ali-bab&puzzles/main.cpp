#include<iostream>
using namespace std;
int main() {

	long long a, b, c, d;
	bool flag = false;
	cin >> a >> b >> c >> d;
	if (a + b * c == d)
		flag = true;
	if (a + b - c == d)
		flag = true;
	if (a - b * c == d)
		flag = true;
	if (a - b + c == d)
		flag = true;
	if (a * b + c == d)
		flag = true;
	if (a * b - c == d)
		flag = true;
	
	(flag) ? cout << "YES" : cout << "NO";

	return 0;
}