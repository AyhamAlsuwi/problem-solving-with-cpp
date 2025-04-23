#include<iostream>
using namespace std;
int main() {
	int n,a;
	cin >> n;
	a = n % 10;
	n = n / 10;
	if (a % n == 0 )
		cout << "YES" << endl;
	else if(a!=0 && n % a == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}