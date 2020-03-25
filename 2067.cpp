#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <iomanip>
#include<math.h> 
using namespace std;



/*int main() {
	long long cal[36] = { 0 };
	cal[0] = 1;
	cal[1] = 1;
	for (int i = 2; i < 36; i++) {
		for (int j = 0; j < i; j++) {
			cal[i] = cal[j] * cal[i - j - 1] + cal[i];
		}
	}
	int n,cnt=1;
	while (cin >> n&&n!=-1) {
		cout << cnt << " " << n << " " << cal[n] * 2 << endl;
		cnt++;
	}
	return 0;
}*/