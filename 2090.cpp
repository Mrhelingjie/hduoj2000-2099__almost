#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <set>
#include<math.h> 
#include <iostream>

using namespace std;
int main()
{
	double sum = 0, a, b;
	char s[1000];
	while (scanf("%s%lf %lf", s, &a, &b) != EOF)
		sum = a * b + sum;
	printf("%.1lf\n", sum);
}