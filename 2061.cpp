#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<iomanip>

using namespace std;
/*int main() {
	int  N,k;
	bool judgeUnder(vector<double> v);
	double getScoreSum(vector<double> c, vector<double>s);
	double getCreditSum(vector<double> v);
	double score, avg , credits;
	string name;
	//n个输入
	while (cin >> N) {
		getchar();
		while (N--) {
			//k个课程
			cin >> k;
			vector<string> cname;
			vector<double> ccredit;
			vector<double> sc;
			//存数据
			while (k--)
			{
				cin >> name >> credits >> score;
				cname.push_back(name);
				ccredit.push_back(credits);
				sc.push_back(score);
				getchar();
			}
			if (judgeUnder(sc)) {
				printf("Sorry!\n");
			}
			else {
				double re = getScoreSum(ccredit, sc) / getCreditSum(ccredit);
				printf("%.2lf\n", re);
			}
			printf("\n");
		}
	}

	return 0;
}
bool judgeUnder(vector<double> v) {
	for (auto item : v) {
		if (item < 60) {
			return true;
		}
	}
	return false;
}
double getScoreSum(vector<double> c, vector<double>s) {
	if (c.size() != s.size())return -1;
	double sum = 0;
	vector<double>::iterator p, q;
	for (p = c.begin(), q = s.begin(); p != c.end() && q != s.end(); p++, q++) {
		sum = sum + (*p) * (*q);
	}
	return sum;
}
double getCreditSum(vector<double> v) {
	double sum = 0;
	for (double d : v) {
		sum = sum + d;
	}
	return sum;
}*/