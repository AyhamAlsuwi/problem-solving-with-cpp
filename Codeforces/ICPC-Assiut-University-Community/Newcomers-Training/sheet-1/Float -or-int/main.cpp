#include<iostream>
using namespace std;
int main() {
	float x;
	int i;
	cin >> x;
	i = x;
	
	if (i - x == 0.0)
		cout << "int " << i << endl;
	else
		cout << "float " << i << " " << x - i << endl;

	return 0;
}