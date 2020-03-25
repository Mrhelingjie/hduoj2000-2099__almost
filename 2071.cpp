#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <iomanip>
#include<math.h> 
using namespace std;

/*int main() {
	
	int n,c;
	double tmp;
	double getHighest(vector<double> v);
	while (cin >> n) {
		while (n--)
		{
			cin >> c;
			double max = 0;
			while (c--)
			{
				cin >> tmp;
				if (tmp > max)max = tmp;
			}
			cout.precision(2);
			cout <<fixed << max << endl;
		}
	}
	return 0;
}*/

double getHighest(vector<double> v) {
	double max = 0;
	for (vector<double>::iterator p = v.begin(); p != v.end(); p++) {
		if (*p > max) {
			max = *p;
		}
	}
	return max;
}