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
	//cnt ����
	for (int i = 3; i < 21; i++) {
		cnt[i] = i * (cnt[i - 1] + 1);
	}
	int n,tmp;
	long long m;
	//n������
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

void init()  //a[n]��ʾAn�������и���
{
	int i;

	a[1] = 1;

	for (i = 2; i <= 20; i++)
		a[i] = i * (a[i - 1] + 1);   //An���Էֳ�n�飨1,2��...��n)
							 //ÿ����˵�һ������֮�⣬n-1
							 //��������������ÿ��ʣ�µ�����
							 //������ȣ���ΪԪ�ظ������
							 //����Ȼ��С����ͬ��                                                    
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

		while (m)  //���Ԫ�����
		{
			//temp=a[n]/n+1;  //temp��helpʹ���ҵ�ÿ�θ����
			// help=m/temp+1;  //��Ԫ�أ���1��Ϊ�˴�����ʽ��  
			//cout<<b[help];  //ͳһ




			help = m / (a[n] / n) + (m % (a[n] / n) ? 1 : 0);
			cout << b[help];

			m -= (help - 1)*(a[n] / n) + 1; //ÿ���һ��Ԫ�أ���Ӧ��������������ݷ�Χ
			if (m)
				cout << " ";




			for (i = help; i < n; i++)     //��������
				b[i] = b[i + 1];

			n--;    //��������
		}

		cout << endl;
	}

	return 0;
}*/