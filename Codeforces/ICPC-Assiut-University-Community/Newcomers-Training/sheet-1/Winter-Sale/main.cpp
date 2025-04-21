#include<iostream>
using namespace std;
int main() {
	float x, p;
	cin >> x >> p;
	x = x / 100;
	cout << p / (1 - x) << endl;
	return 0;
}