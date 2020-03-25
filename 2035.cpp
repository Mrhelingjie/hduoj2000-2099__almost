#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

/*int main() {
	int m,n;
	while (cin >> m>>n) {
		if (m == 0 && n == 0) break;
		if (n == 0) {
			cout <<1<< endl;
			continue;
		}
		int sum = 1;
		for (int i = 0; i < n; i++) {
			sum = sum * m;
			if (sum > 1000) {
				sum = sum % 1000;
			}
		}
		cout << sum <<endl;
	}
	return 0;
}*/