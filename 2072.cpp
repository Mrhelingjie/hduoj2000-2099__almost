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
	//bool findsameword(vector<string> v,string str);
	string str,word;
	set<string> s;
	while (getline(cin,str))
	{
		s.clear();
		if (str == "#")break;
		istringstream stream(str);
		while (stream>>word) {
			s.insert(word);
		}
		cout << s.size() << endl;
	}
	return 0;
}*/
















bool findsameword(vector<string> v,string str) {
	for (auto s : v) {
		if (s.compare(str)==0) {
			return true;
		}
	}
	return false;
}