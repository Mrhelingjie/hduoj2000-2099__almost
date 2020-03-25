#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*int main() {
	int n, val;
	int Every_teacher(int x);
	while (scanf_s("%d",&n)!=EOF&&n!=0)
	{
		vector<int> v;
		while (n--) {
			scanf_s("%d", &val);
			v.push_back(val);
		}
		for (int &item : v) {
			item = Every_teacher(item);
		}
		vector<int>::iterator p;
		int sum = 0;
		for (p = v.begin(); p != v.end(); p++) {
			sum = sum + *p;
		}
		printf("%d\n", sum);
	}
}*/
int Every_teacher(int money) {
	int cnt = 0;
	while (money >0) {
		if (money >= 100) {
			cnt = cnt + money / 100;
			money = money - (money / 100) * 100;
		}
		else if (money >= 50) {
			cnt = cnt + money / 50;
			money=money-(money / 50) * 50;
		}
		else if (money >= 10) {
			cnt = cnt + money / 10;
			money = money - (money / 10) * 10;
		}
		else if (money >= 5) {
			cnt = cnt + money / 5;
			money = money - (money / 5) * 5;
		}
		else if (money >= 2) {
			cnt = cnt + money / 2;
			money = money - (money / 2) * 2;
		}
		else if (money >= 1) {
			cnt = cnt + money ;
			money =0;
		}
		
	}
	return cnt;
}