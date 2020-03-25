#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

/*int main() {
	int getS(int num);
	int n;
	int a, b;
	while (cin >> n) {
		while (n--)
		{
			cin >> a >> b;
			if (a == getS(b) && b == getS(a)) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}*/
int  getS(int num) {
	vector<int> v;
	v.push_back(1);
	for (int i = 2; i < sqrt(num); i++) {
		if (num%i == 0) {
			v.push_back(i);
			v.push_back(num / i);
		}
	}
	int sum = 0;
	for (auto item : v) {
		sum = item + sum;
	}
	return sum;
}