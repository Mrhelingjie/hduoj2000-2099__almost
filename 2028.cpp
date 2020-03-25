#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
/*int main() {	
	int n,tmp,s;
	int gcd(int a, int b);
	while (cin >> n) {
		s = 1; tmp = 1;
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			s = gcd(s, tmp);
		}
		cout << s << endl;
	}

	return 0;
}*/
int gcd(int a, int b) {
	int re, tmp, ta = a, tb = b,max;
	//a bigger
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	re = a % b;  //求余
	if (re == 0)  //
		max = b;
	else {
		while (re != 0)//直到余数为0
		{
			a = b;
			b = re;
			re = a % b;
			max = b;
		}
	}
	return ta / max * tb;
}