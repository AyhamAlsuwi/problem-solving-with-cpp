#include<iostream>
using namespace std;
int main() {
	long long l1, r1, l2, r2, begin=-1, end;
	
	cin >> l1 >> r1 >> l2 >> r2;

	if (l2 <= r1 && l2 >= l1)
		begin = l2;
	else if (l1 <= r2 && l1>=l2)
		begin = l1;


	if (begin == -1)
		cout << "-1" << endl;
	else {
		if (r2 <= r1)
			end = r2;
		else
			end = r1;

		cout << begin << " " << end << endl;
	}
	return 0;
}