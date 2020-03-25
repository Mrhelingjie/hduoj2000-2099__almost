#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<iomanip>
using namespace std;
/*int main() {
	long long cnt[21] = { 0 };
	cnt[1] = 1; cnt[2] = 4;
	//cnt 个数
	for (int i = 3; i < 21; i++) {
		cnt[i] = i * (cnt[i - 1] + 1);
	}
	int n,tmp;
	long long m;
	//n个输入
	while (cin >> n>> m) {
		vector<int> num;
		for (int i = 1; i <= n; i++) {
			num.push_back(i);
		}
		tmp = m / (4 / n) + (m % (4 / n) ? 1 : 0);
		m -= (2 - 1)*(4 / 2)+1;
		cout << tmp<< endl;
		cout << m << endl;
	}

	return 0;
}
*/


#define N 21
__int64 a[N];

void init()  //a[n]表示An的子序列个数
{
	int i;

	a[1] = 1;

	for (i = 2; i <= 20; i++)
		a[i] = i * (a[i - 1] + 1);   //An可以分成n组（1,2，...，n)
							 //每组除了第一个序列之外，n-1
							 //的子序列总数与每组剩下的序列
							 //总数相等，因为元素个数相等
							 //（虽然大小不相同）                                                    
}

/*int main()
{
	int i, help, n;
	int b[N];
	__int64 m;
	//__int64 temp;

	init();

	while (cin >> n >> m)
	{
		for (i = 1; i <= n; i++)
			b[i] = i;

		while (m)  //逐个元素输出
		{
			//temp=a[n]/n+1;  //temp和help使用找到每次该输出
			// help=m/temp+1;  //的元素，加1是为了代码形式的  
			//cout<<b[help];  //统一




			help = m / (a[n] / n) + (m % (a[n] / n) ? 1 : 0);
			cout << b[help];

			m -= (help - 1)*(a[n] / n) + 1; //每输出一个元素，都应该缩减处理的数据范围
			if (m)
				cout << " ";




			for (i = help; i < n; i++)     //缩减数据
				b[i] = b[i + 1];

			n--;    //缩减数据
		}

		cout << endl;
	}

	return 0;
}*/