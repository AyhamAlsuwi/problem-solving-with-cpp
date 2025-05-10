#include<iostream>
using namespace std;
int main() {
	long long n, max,a;
	cin >> n>>max;
	for (int i = 1;i < n;i++) {
		cin >> a;
		if (a > max)
			max = a;
	}
	cout << max;
		

	return 0;
}