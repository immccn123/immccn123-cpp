#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[3];
	int n;
	cin >> n ; 
	// cout << a[0] << ' ' << a[1] << ' ' << a[2];
	for(int i = 0;i < n;i++,cout<<endl)
	{
		cin >> a[0] >> a[1] >> a[2];
		if(a[0] >= a[1]) swap(a[0], a[1]);
		if(a[1] >= a[2]) swap(a[1], a[2]);
		if(a[0] >= a[1]) swap(a[0], a[1]);
		if(a[0] == a[1] && a[0] == 0)
		{
			cout << 0;
			continue;
		}
		if(a[0] == 0)
		{
			if(a[1] == a[2])
			{
				cout << 1;
			}
			else
			{
				cout << 2;
			}
			continue;
		}
		if(a[0] == a[1])
		{
			cout << 2;
			continue;
		}
		else
		{
			if((a[0] + a[1]) == a[2]) cout << 2;
			else if(a[1] == a[2]) cout << 2;
			else cout << 3;
		}
	}
}