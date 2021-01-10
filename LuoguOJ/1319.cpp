/*
	P1319
	luogu
	Ò»´Î¹ý 

*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int now = 0;
	int nw = 0;
	for(int i = 0;i < n*n;)
	{
		cin >> nw;
		for(int j = 0;j < nw;i++,j++)
		{
			cout << now;
			if(i%n == (n-1))
				cout << endl;
		}
		now = !now;
	}
	return 0;
} 
