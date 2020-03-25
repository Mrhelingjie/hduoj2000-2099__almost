#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include <iomanip>
using namespace std;

/*int main() {
	int n, input;
	long long v[21];
	v[0] = 0;
	v[1] = 0;
	v[2] = 1;
	v[3] = 2;
	v[4] = 9;
	for (int i = 5; i < 21; i++) {
		v[i] = (i - 1)*(v[i - 1] + v[i - 2]);
	}
	cin >> n;
	while (n--) {
		double res = 1.0;
		cin >> input;
		//!n
		for (int i = 1; i <= input; i++) {
			res = res * i;
		}
		cout.precision(2);
		cout << fixed<< ((v[input]*1.0) / res)*100 << "%" << endl;
		
	}
	return 0;
}*/

