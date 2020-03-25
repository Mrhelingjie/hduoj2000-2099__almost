#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<math.h>
using namespace std;

/*int main() {
	int n;
	double x1, y1, x2, y2;
	double calSinglePoint(int x, int y);
	while (cin >> n) {
		while (n--)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			double len1 = calSinglePoint(x1, y1);
			double len2 = calSinglePoint(x2, y2);
			//cout << len1 << endl;
			//cout << len2 << endl;
			cout.precision(3);
			cout <<fixed<< fabs(len1-len2 )<< endl;
		}
	}
	return 0;
}
double calSinglePoint(int x, int y) {
	double sq2 = sqrt(2);
	double len = 0,ymove,xmove;
	for (int i = 0; i < x + y; i++) {
		len += sq2 * i;
	}
	ymove = 1;
	xmove = 0;
	for (int i = 0; i < x + y; i++) {
		len += sqrt(xmove*xmove + ymove * ymove);
		ymove++;
		xmove++;
	}
	if (x == 0) {

	}
	else if (y == 0) {
		len += (x + y)*sq2;
	}
	else {
		len += x * sq2;
	}
	return len;
}*/