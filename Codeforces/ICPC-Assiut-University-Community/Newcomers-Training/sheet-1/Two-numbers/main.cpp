#include<iostream>
using namespace std;
int main() {

	int a, b;
	cin >> a >> b;
	cout << "floor " << a << " / " << b << " = " << a / b << endl;
	cout << "ceil " << a << " / " << b << " = " ;
	if (a % b == 0)
		cout << a / b << endl;
	else
		cout << a / b + 1 << endl;
	cout << "round " << a << " / " << b << " = ";
	if (a * 1.0 / b >= a / b + 0.5)
		cout << a / b + 1 << endl;
	else
		cout << a / b << endl;

	

	return 0;
}