#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	double a, b, c, p, qwq;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	qwq = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.1lf",qwq);
	return 0;
}