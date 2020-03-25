#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <set>
#include<math.h> 
#include <iostream>
#include <sstream>


using namespace std;

/*int main() {
	int n;
	double hh, mm, ss, m_a, h_a;
	while (cin >> n)
	{
		while (n--)
		{
			cin >> hh >> mm >> ss;
			if (hh > 12)hh = hh - 12;
			mm = ss / 60 + mm;
			hh = hh + mm / 60;


			m_a =  mm*6;
			h_a = hh * 30;
			//cout << m_a << endl;
			//cout << h_a << endl;
			if (h_a>m_a) {
				if((h_a - m_a) >180)cout <<int(360 -h_a +m_a) << endl;
				else cout << int(h_a - m_a) << endl;
			}
			else {
				if ((m_a - h_a) > 180)cout << int(360 - m_a + h_a) << endl;
				else cout << int(m_a - h_a )<< endl;
			}
		}
	}
	return 0;
}*/