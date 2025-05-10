#include<iostream>
using namespace std;
int main() {
	int p;
	cin >> p;
	while (p != 1999) {
		cout << "Wrong"<<endl;
		cin >> p;
	}
	cout << "Correct" << endl;;

	return 0;
}