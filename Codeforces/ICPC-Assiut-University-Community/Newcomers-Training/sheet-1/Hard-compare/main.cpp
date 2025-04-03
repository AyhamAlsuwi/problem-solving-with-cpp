#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c, d,exp1,exp2;
	cin >> a >> b >> c >> d;

	exp1 = b * log(a);
	exp2 = d * log(c);

	if (exp1 > exp2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}