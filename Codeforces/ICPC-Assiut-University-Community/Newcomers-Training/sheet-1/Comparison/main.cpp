#include<iostream>
using namespace std;
int main() {

	int a, b;
	char s;
	bool r;
	cin >> a >> s >> b;
	if (s == '>')
		b = (a > b);
	else if (s == '<')
		b = (a < b);
	else
		b = (a == b);
	
	if (b)
		cout << "Right" << endl;
	else
		cout << "Wrong" << endl;

	return 0;
}