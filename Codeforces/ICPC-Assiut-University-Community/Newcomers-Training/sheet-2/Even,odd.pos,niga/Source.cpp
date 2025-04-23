#include<iostream>
using namespace std;
int main() {
	int a,b,i=0,e=0,o=0,p=0,n=0;
	cin >> a;
	while (i < a) {
		cin >> b;
		(b % 2 == 0) ? e++ : o++;
		if (b != 0)
			(b < 0) ? n++ : p++;
		i++;
	}

	cout << "Even: " << e << endl;
	cout << "Odd: " << o << endl;
	cout << "Positive: " << p << endl;
	cout << "Negative: " << n << endl;


	return 0;
}