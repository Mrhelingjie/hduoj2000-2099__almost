#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include <iomanip>
using namespace std;

/*int main() {
	int n,num;
	char c;
	int fun(char c);
	while (cin  >> n) {
		while (n--)
		{
			cin >> c >> num;
			cout << fun(c) + num << endl;
		}
	}
	return 0;
}*/
int fun(char c) {
	if (c >= 'A'&&c <= 'Z') {
		return c - 'A' + 1;
	}
	else if(c >= 'a'&&c <= 'z')
	{
		return 'a' - c - 1;
	}
	else {
		return 0;
	}
}