#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

/*int main() {
	int m;
	cin >> m;
	getchar();
	string str;
	while (m)
	{
		getline(cin, str);
		vector<char> v(str.begin(), str.end());
		bool flag = true;
		if (v[0] >= 'A'&&v[0] <= 'z'||v[0]=='_') {
			for (int i = 1; i < v.size(); i++) {
				if ((v[i] >= '0'&&v[i] <= '9') || (v[i] >= 'A'&&v[i] <= 'z')||v[i]=='_') 
				{
					flag = true;
				}
				else {
					flag = false;
					break;
				}
			}
		}
		else {
			flag = false;
		}
		
		if (flag) { 
			printf("yes\n"); 
		}
		else {
			printf("no\n");
		}
		m--;
	}
	
}*/
