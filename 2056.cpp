#include<iostream>
#include<string>
#include<algorithm>
#include <iomanip>
#include<math.h>
using namespace std;

/*int main() {
	double x1,y1,x2,y2,x3,y3,x4,y4,t;
	while (cin >> x1>>y1>> x2>> y2>> x3>> y3>> x4>> y4) {
		//换成主对角线
		if (x1 > x2) {
			t = x2;
			x2 = x1;
			x1 = t;
		}
		if (y1 > y2) {
			t = y2;
			y2 = y1;
			y1 = t;
		}
		if (x3 > x4) {
			t = x4;
			x4 = x3;
			x3 = t;
		}
		if (y3 > y4) {
			t = y4;
			y4 = y3;
			y3 = t;
		}
		
		//x2 y2,x3,y3
		x1 = max(x1, x3);
		y1 = max(y1, y3);
		x2 = min(x2, x4);
		y2 = min(y2, y4);
		cout.precision(2);
		if (x1 > x2 || y1 > y2) {
			cout << 0.00 << endl;
		}
		else {
			cout <<fixed<< (x2 - x1)*(y2 - y1) << endl;
		}
	}

	return 0;
}*/
