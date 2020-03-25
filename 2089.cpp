#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <set>
#include<math.h> 
#include <iostream>

using namespace std;

int main() {
	int st, en ;
	bool judgeChar624(string str);
	while (cin >> st >> en &&!( st ==0 && en ==0))
	{
		int cnt = 0;
		for (int i = st; i <= en; i++) {
			string str = to_string(i);
			if (judgeChar624(str)) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
bool judgeChar624(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '4')return false;
		else if (i < str.length() - 1 && str[i] == '6'&&str[i + 1] == '2') return false;
		else {

		}
	}
	return true;
}
/*#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include <algorithm>
#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))
#define ll long long
#define eps 1e-8
#define ms(x,y) (memset(x,y,sizeof(x)))
#define fr(i,x,y) for(int i=x;i<=y;i++)
using namespace std;
int dp[10][3];
void make()
{
    ms(dp,0);
    dp[0][0]=1;
    fr(i,1,6)
    {
        dp[i][0]=dp[i-1][0]*9-dp[i-1][1];// 不含62 4的
        dp[i][1]=dp[i-1][0];//首位为2的 不含62 4的
        dp[i][2]=10*dp[i-1][2]+dp[i-1][1]+dp[i-1][0];//不吉利的
    }
}
int n,m;
bool init()
{
    return cin>>n>>m,n||m;
}
int num(int k)
{
    int len=0,a[10];
    int sum=k;
    while(k)
    {
        a[++len]=k%10;
        k/=10;
    }
    a[len+1]=0;
    int s=0;
    bool flag=0;
    for(int i=len;i>0;i--)
    {
        s+=dp[i-1][2]*a[i];
        if(flag)s+=dp[i-1][0]*a[i];
        else
        {
            if(a[i]>4)s+=dp[i-1][0];
            if(a[i]>6)s+=dp[i-1][1];
            if(a[i+1]==6&&a[i]>2)s+=dp[i][1];
        }
        if(a[i]==4||(a[i]==2&&a[i+1]==6))flag=1;
    }
    return sum-s;
}
void doit()
{
    int ans=0;
    ans=num(m+1)-num(n);
    cout<<ans<<endl;
}
int main()
{
    make();
    while(init())
    {
        doit();
    }
    return 0;
    //fr(i,1,9)cout<<dp[i][0]<<endl;
}*/