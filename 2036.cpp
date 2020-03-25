#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

/*int main() {
	int n;
	while (cin>> n) {
		//if (m == 0 && n == 0) break;
		if (n == 0) {
			break;
		}
		int vex[100][2] = { 0 };
		
		for (int i = 0; i < n; i++) {
			cin >> vex[i][0] >> vex[i][1];
			
		}
		double sum = 0.0;
		for (int i = 0; i < n; i++) {
			if (i == n - 1) {
				sum = sum + (vex[i][0] * vex[0][1] - vex[i][1] * vex[0][0]);
			}
			else {
				sum = sum + (vex[i][0] * vex[i+1][1] - vex[i][1] * vex[i+1][0]);
			}
		}
		printf("%.1f\n", sum / 2);

	}
	return 0;
}*/