#include<iostream>
using namespace std;
int main() {

	long long a, b, c,max,mid,min;
	cin >> a >> b >> c;
	if(a>b)
		if (a > c) {
			max = a;
			if (b > c) {
				min = c;
				mid = b;
			}
			else {
				min = b;
				mid = c;
			}
			
		}
		else {
			max = c;
			min = b;
			mid = a;
		}
	else if (b > c) {
		max = b;
		if (c > a) {
			min = a;
			mid = c;
		}
		else {
			min = c;
			mid = a;
		}
	}
	else {
		max = c;
		min = a;
		mid = b;
	}

	cout << min << endl << mid << endl << max << endl <<endl;
	cout << a << endl << b << endl << c << endl;

	return 0;
}