#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long t[n + 1];
	long long pl[n+ 1];
	long long sum = 0;
	double ave = 0.0;
	for(int i = 1;i <= n;i++)
	{
		cin >> t[i];
		pl[i] = i;
	}
	for(int i = n;i > 0;i--)
	{
		for(int j = n - 1;j > 0;j--)
		{
			if(t[j] > t[j + 1])
			{
				swap(t[j],t[j + 1]);
				swap(pl[j],pl[j + 1]);
			}
		}
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j < i;j++)
		{
			sum += t[j];
		}
	}
	ave = (double)sum / (n);
	for(int i = 1;i <= n;i++)
	{
		cout << pl[i] << ' ';
	}
	printf("\n%.2f\n",ave);
	return 0;
}
