#include<iostream>
using namespace std;
int main() {

	long long n, m, k;
	cin >> n >> m >> k;
	if (n == 0 || k == 0)
		cout << 0 << endl;
	else if (m == 0)
		(n / 2 >= k) ? cout << k : cout << n / 2;
	else if (n <= m && n <= k)
		cout << n;
	else if (k <= n && k <= m)
		cout << k;
	else {
		n -= m;
		k -= m;
		(n / 2 >= k) ? cout << k+m : cout << n / 2 +m;
	}

	

	return 0;

}