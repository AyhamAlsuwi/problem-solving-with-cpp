#include<iostream>
using namespace std;
int main() {

	long long n, m,ans;
	cin >> n >> m;
	ans = (n % 10) + (m % 10);
	cout << ans << endl;

	return 0;
}