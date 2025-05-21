#include<iostream>
using namespace std;
int main() {
	int a, b,count=0;
	bool flag;
	cin >> a >> b;
	for (int i = a;i <= b;i++) {
		int n = i;
		flag = true;
		while (n != 0) {
			int d = n % 10;
			if (d != 4 && d != 7) {
				flag = false;
				count++;
				break;
			}
			n /= 10;
		}
		if (flag)
			cout << i<<" ";
	}
	if (count==b-a+1)
		cout << -1;

	return 0;
}