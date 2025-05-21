#include<iostream>
#include<stack>
using namespace std;
int main() {
	stack<int> sta;
	int a, b,min;
	cin >> a >> b;
	(a < b) ? min = a : min = b;
	for (int i = 1;i <= min;i++)
		if (a % i == 0 && b % i == 0)
			sta.push(i);
	cout << sta.top() << endl;

	return 0;
}