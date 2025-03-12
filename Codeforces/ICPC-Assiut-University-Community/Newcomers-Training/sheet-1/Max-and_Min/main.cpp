#include<iostream>
using namespace std;
int main() {

	long long a, b, c,max,min;
	cin >> a >> b >> c;
	if (a > b)
		if (a > c){
			max = a;
			min = (b > c) ? c : b;
		}
		else{
			max = c;
			min = b;
		}
		else if (b > c){
			max = b;
			min = (a > c) ? c : a;
		}
			else {
			max = c;
			min = a;
				}

	cout << min << " " << max << endl;
	return 0;
}