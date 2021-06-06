#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n, tmp;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> tmp;
		if(tmp % 2) cout << "zs wins\n";
		else cout << "pb wins\n";
	}
	return 0;
}