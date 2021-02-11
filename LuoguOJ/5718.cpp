#include <iostream>
using namespace std;
int main()
{
	int n, min, ls;
	cin >> n >> min;
	for(int i = 1;i < n;i++)
	{
		cin >> ls;
		if(ls < min) min = ls;
	}
	cout << min;
} 
