#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <iomanip>
#include<math.h> 
using namespace std;

/*int main() {
	double C(int n, int m);
	long long cal[26] = { 0,0,1 };
	for (int i = 3; i < 26; i++) {
		cal[i] = (i - 1)*(cal[i - 1] + cal[i - 2]);
	}
	int n;
	while (cin >> n && n != 0) {
		if (n == 1 || n == 2 || n == 3)
		{
			cout << 1 << endl;
			continue;
		}

		double sum = 0;
		for (int i = n / 2; i > 1; i--) {
			sum = sum + C(n, i)*cal[i];
		}
		printf("%.0lf\n", sum + 1);
	}
	return 0;
}
double C(int n, int m)
{
	double sum = 1, i, j;
	for (i = n, j = m; j >= 1; i--, j--)
		sum *= i / j;
	return sum;
}*/
