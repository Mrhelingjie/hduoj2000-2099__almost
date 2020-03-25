#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

/*int main() {
	int num,m;

	while (cin >> num>>m) {
		stack<char> s;
		if (num < 0) {
			cout << "-";
			num = -num;
		}
		while (num != 0) {
			int res = num % m;
			if (res > 9) {
				s.push(char(res - 10 + 'A'));
			}
			else {
				s.push(char(res + '0'));
			}
			num = num / m;
		}
		while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}

	return 0;
}*/