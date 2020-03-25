#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <set>
#include<math.h> 
#include <iostream>
#include<iomanip>
using namespace std;

/*int main() {
	int m, n;
	string intToA(int n, int radix);
	int addString(string str);
	while (cin >> m  && m)
	{
		string str10 = to_string(m);
		string str16 = intToA(m, 16);
		string str12 = intToA(m, 12);
		if (addString(str10) == addString(str16) && addString(str12) == addString(str16)) {
			cout << m << " is a Sky Number." << endl;
		}
		else {
			cout << m << " is not a Sky Number." << endl;
		}
	}
	return 0;
}*/
string intToA(int n, int radix)    //n是待转数字，radix是指定的进制
{
	string ans = "";
	do {
		int t = n % radix;
		if (t >= 0 && t <= 9)	ans += t + '0';
		else ans += t - 10 + 'A';
		n /= radix;
	} while (n != 0);	//使用do{}while（）以防止输入为0的情况
	reverse(ans.begin(), ans.end());
	return ans;
}
int addString(string str) {
	vector<char> v(str.begin(), str.end());
	int res = 0;
	for (char c : v) {
		if (c >= '0'&&c <= '9') {
			res = res + c - '0';
		}
		else {
			res = res + c - 'A' + 10;
		}
	}
	return res;
}