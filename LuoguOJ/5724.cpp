#include <iostream>
using namespace std;
int main()
{
	int n, min = 0xc3c3c3, ls, max = -1;
	cin >> n;
	for(int i = 1;i < n;i++)
	{
		cin >> ls;
		if(ls < min) min = ls;
		if(ls > max) max = ls;
	}
	cout << (max - min);
} 
