#include <iostream>
using namespace std;
int main()
{
	int n,count = 1,max_count = 0;
	cin >> n;
	long long a[n];
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	for(int i = 0;i < n;i++)
	{
		if(a[i] + 1 == a[i + 1])
		{
			count++;
		}
		else
		{
			if(count > max_count)
			{
				max_count = count;
			}
			count = 1;
		}
	}
	cout << max_count;
}
