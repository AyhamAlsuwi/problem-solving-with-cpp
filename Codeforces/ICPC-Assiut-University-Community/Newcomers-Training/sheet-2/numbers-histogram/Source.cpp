#include<iostream>
using namespace std;
int main() {
	char c;
	int a,b;
	cin >> c >> a;
	for (int i = 0;i < a;i++) {
		cin >> b;
		for (int j = 0;j < b;j++)
			cout << c;
		cout << endl;
	}

	return 0;
}