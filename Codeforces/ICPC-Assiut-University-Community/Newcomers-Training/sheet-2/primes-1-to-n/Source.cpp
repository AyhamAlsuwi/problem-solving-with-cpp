#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;
	cout << 2 << " ";

	for (int i = 3;i <= n;i += 2) {
		int j = 3;
		for (;j <= i / 2;j++)
			if (i % j == 0)
				break;
		if (j > i / 2)
			cout << i << " ";

	}

	return 0;
}