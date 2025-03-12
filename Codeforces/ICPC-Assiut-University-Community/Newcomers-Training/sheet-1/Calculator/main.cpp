#include<iostream>
using namespace std;
int main() {

	int a, b;
	char s;
	cin >> a >> s >> b;
	switch (s)
	{
	case 43:cout << a + b;break;
	case 45:cout << a - b;break;
	case 42:cout << a * b;break;
	case 47:cout << a / b;break;
	}

	return 0;

}