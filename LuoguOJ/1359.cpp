#include <iostream>
using namespace std;
int r[201][201];
int min(int a,int b)
{
	if(a < b) return a;
	else return b;
}
int main()
{
	long sum = 0xc3c3c3;
	int n;
	cin >> n;
	int lst[n + 1];
	for(int i = 1;i < n;i++)
	{
		for(int j = i + 1;j <= n;j++)
			cin >> r[i][j];
		lst[i] = 1e9;
	}
	for(int i = n - 1;i >= 1;i--)
		for(int j = i + 1;j <= n;j++)
		{
			lst[i]=min(lst[i],r[i][j] + lst[j]);
			//sum = min(lst[i],sum);
		}
	cout << lst[1];
}
