#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
double getdis(double x1,double y1,double x2,double y2)
{
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main()
{
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	//cout << << << (getdis(x1, y1, x2, y2) + getdis(x2,y2,x3,y3) + getdis(x1, y1, x3, y3));
	printf("%.2f",(getdis(x1, y1, x2, y2) + getdis(x2,y2,x3,y3) + getdis(x1, y1, x3, y3)));
	return 0;
}